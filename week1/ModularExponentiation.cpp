#include <iostream>

using namespace std;

long long modExp(long long x, long long n, long long m) {
    long long result = 1;
    x = x % m;

    while (n > 0) {
        if (n % 2 == 1) { // If n is odd
            result = (result * x) % m;
        }

        x = (x * x) % m;
        n /= 2;
    }

    return result;
}

int main() {
    long long x, n, m;
    cin >> x >> n >> m;

    cout << modExp(x, n, m) << endl;

    return 0;
}
