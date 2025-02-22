#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> stack;
    
    for (int i = 0; i < n; i++) {
        int op;
        cin >> op;
        
        if (op == 1) { 
            int num;
            cin >> num;
            stack.push_back(num);
        } else if (op == 2) { 
            cout << stack.back() << endl;
            stack.pop_back();
        }
    }
    
    return 0;
}
