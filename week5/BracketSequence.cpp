#include <iostream>
#include <string>

using namespace std;

bool isValidBracketSequence(const string &s) {
    int balance = 0;
    
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else {
            balance--;
        }
        if (balance < 0) {
            return false; 
        }
    }
    
    return balance == 0; 
}

int main() {
    string s;
    cin >> s;
    
    if (isValidBracketSequence(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
