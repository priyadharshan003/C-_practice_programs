#include <iostream>
#include <vector>
using namespace std;

// Structure of the node
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Insert node
Node* insertNode(Node* head, int val) {
    Node* tem = new Node(val, head);
    return tem;
}

// Delete node
Node* deleteNode(Node* head, int delval) {
    // If the list is empty
    if (head == nullptr) return nullptr;

    // If the head needs to be deleted
    if (head->data == delval) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != delval) {
        temp = temp->next;
    }

    // If the node was not found
    if (temp->next == nullptr) return head;

    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;

    return head;
}

// Print linked list
void printLL(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main() {
    vector<int> arr = {12, 3, 4, 5, 7};
    int val = 31;
    int delval = 5;
    int size = arr.size();

    // Create linked list
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < size; i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    
    cout << "Original list: ";
    printLL(head);
    cout << endl;

    Node* curr = insertNode(head, val);
    cout << "List after insertion: ";
    printLL(curr);
    cout << endl;

    Node* curr2 = deleteNode(curr, delval); // Using curr instead of head
    cout << "List after deletion: ";
    printLL(curr2);
    cout << endl;

    return 0;
}
