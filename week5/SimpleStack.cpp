#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stack {
private:
    vector<int> stack;

public:
    void push(int n) {
        stack.push_back(n);
        cout << "ok" << endl;
    }
    
    void pop() {
        cout << stack.back() << endl;
        stack.pop_back();
    }
    
    void back() {
        cout << stack.back() << endl;
    }
    
    void size() {
        cout << stack.size() << endl;
    }
    
    void clear() {
        stack.clear();
        cout << "ok" << endl;
    }
};

int main() {
    Stack stack;
    string command;
    
    while (true) {
        cin >> command;
        
        if (command == "push") {
            int n;
            cin >> n;
            stack.push(n);
        } else if (command == "pop") {
            stack.pop();
        } else if (command == "back") {
            stack.back();
        } else if (command == "size") {
            stack.size();
        } else if (command == "clear") {
            stack.clear();
        } else if (command == "exit") {
            cout << "bye" << endl;
            break;
        }
    }
    
    return 0;
}
