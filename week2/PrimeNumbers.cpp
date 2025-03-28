#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int  m, n;
    cin >> m >> n;

    bool found = false;
    for (int i = m; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Absent" << endl;
    }

    return 0;
}
