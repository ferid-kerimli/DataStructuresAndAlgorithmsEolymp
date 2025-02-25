#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int evaluateRPN(const string &expression) {
    stack<int> st;
    stringstream ss(expression);
    string token;

    while (ss >> token) {
        if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-')) {
            st.push(stoi(token));
        } else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else if (token == "/") st.push(a / b); 
        }
    }

    return st.top(); 
}

int main() {
    string expression;
    getline(cin, expression); 
    
    cout << evaluateRPN(expression) << endl;
    
    return 0;
}
