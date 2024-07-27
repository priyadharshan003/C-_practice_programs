#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int minOperations(string s, string s1) {
    // Check if the two strings have the same characters and frequencies
    string sorted_s = s;
    string sorted_s1 = s1;
    sort(sorted_s.begin(), sorted_s.end());
    sort(sorted_s1.begin(), sorted_s1.end());

    if (sorted_s != sorted_s1) {
        cout << "The string cannot be transformed" << endl;
        return -1;
    }

    int n = s.length();
    int operations = 0;

    // Traverse the second string from the end and try to match it with the first string from the end
    int j = n - 1;
    for (int i = n - 1; i >= 0; --i) {
        if (s[j] == s1[i]) {
            --j; // If characters match, move to the next character in the first string
        } else {
            ++operations; // Else, increment the operation count
        }
    }

    return operations;
}

int main() {
    string s, s1;
    cin >> s >> s1;

    int result = minOperations(s, s1);
    if (result != -1) {
        cout << result << endl;
    }

    return 0;
}
