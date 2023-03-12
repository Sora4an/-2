#include <iostream>
#include <stack>

bool RightBracketSequence(std::string seq) {
    std::stack<char> st;
    for (auto c : seq) {
        if (c == '(' || c == '[' || c == '{') { 
            st.push(c);
        }
        else if (!st.empty()) {
            if (c == ')' && st.top() == '(') {
                st.pop();
            }
            else if (c == ']' && st.top() == '[') {
                st.pop();
            }
            else if (c == '}' && st.top() == '{') {
                st.pop();
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
    }
    if (!st.empty()) {
        return false;
    }
    return true;
}

int main() {
    std::string seq;
    std::cin >> seq;
    std::cout << (RightBracketSequence(seq) ? "yes" : "no");
}