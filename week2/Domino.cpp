#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    
    long long a = 1, b = 2, result = 0;

    for (int i = 3; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }

    cout << b << endl; 
    return 0;
}
