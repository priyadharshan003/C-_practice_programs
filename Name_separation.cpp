#include <iostream>
#include <sstream>
#include <queue>
#include <string>
using namespace std;

int main() {
    string names = "Sara,Bob,Simona,David,Selena,Mark,Samantha";
    stringstream ss(names);
    string name;

    queue<string> matchQueue;     
    queue<string> otherQueue;     

    while (getline(ss, name, ',')) {
        if (!name.empty() && name.front() == 'S' && name.back() == 'a') {
            matchQueue.push(name);
        } else {
            otherQueue.push(name);
        }
    }

    // Output the names in matchQueue
    cout << "Names that start with 'S' and end with 'a':" << endl;
    while (!matchQueue.empty()) {
        cout << matchQueue.front() << endl;
        matchQueue.pop();
    }

    // Output the names in otherQueue
    cout << "\nOther names:" << endl;
    while (!otherQueue.empty()) {
        cout << otherQueue.front() << endl;
        otherQueue.pop();
    }

    return 0;
}
