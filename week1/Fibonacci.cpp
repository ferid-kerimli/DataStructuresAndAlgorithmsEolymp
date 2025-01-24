#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if (n == 0) {
        cout << 1 << "\n";
        return 0;   
    }

    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    }

    int a = 1, b = 1, fib;
    for (int i = 2; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }

    cout << fib << "\n";
    return 0;
}