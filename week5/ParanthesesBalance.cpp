#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(const string &s) {
    stack<char> st;
    
    for (char c : s) {
        if (c == '(' || c == '[') {
            st.push(c);
        } else if (c == ')') {
            if (st.empty() || st.top() != '(') return false;
            st.pop();
        } else if (c == ']') {
            if (st.empty() || st.top() != '[') return false;
            st.pop();
        }
    }
    
    return st.empty(); 
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); 
    
    while (n--) {
        string s;
        getline(cin, s);
        
        if (isValid(s)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}