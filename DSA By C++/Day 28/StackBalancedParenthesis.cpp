#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(string str) {
    stack<char> st;

    for (char ch : str) {

        // Opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }

        // Closing brackets
        else if (ch == ')' || ch == '}' || ch == ']') {

            if (st.empty()) {
                return false;
            }

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string str;

    cout << "Enter parentheses: ";
    cin >> str;

    if (isBalanced(str)) {
        cout << "Balanced Parentheses";
    } else {
        cout << "Not Balanced";
    }

    return 0;
}