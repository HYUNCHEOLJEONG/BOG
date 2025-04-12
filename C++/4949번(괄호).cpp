#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(const string& s) {
    stack<char> st;
    for (char ch : s) {
        if (ch == '(' || ch == '[') {
            st.push(ch);
        } else if (ch == ')') {
            if (st.empty() || st.top() != '(') return false;
            st.pop();
        } else if (ch == ']') {
            if (st.empty() || st.top() != '[') return false;
            st.pop();
        }
        // 다른 글자는 무시
    }
    return st.empty();
}

int main() {
    string line;
    while (true) {
        getline(cin, line);
        if (line == ".") break;

        if (isBalanced(line)) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
    return 0;
}
