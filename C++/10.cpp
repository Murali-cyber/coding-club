#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
/*
         Enter code here
         */
        return 0;
}

// Driver code
int main() {
    cout << boolalpha; // For true/false output
    cout << isValid("()") << endl;        // Output: true
    cout << isValid("()[]{}") << endl;    // Output: true
    cout << isValid("(]") << endl;        // Output: false
    cout << isValid("([)]") << endl;      // Output: false
    cout << isValid("{[]}") << endl;      // Output: true
    return 0;
}
