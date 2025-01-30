#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 2 << '\n';
        return 0;
    }
    if (n == 2) {
        cout << 3 << '\n';
        return 0;
    }

    long long a = 2, b = 3, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b << '\n';
    return 0;
}
