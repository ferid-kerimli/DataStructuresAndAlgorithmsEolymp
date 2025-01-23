#include <iostream>
#include <cmath>

using namespace std;

const long long MOD = 1000000007;

long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;

    while (exp > 0) {
        if (exp & 1) { 
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1; 
    }

    return result;
}

int main() {
    long long n;
    cin >> n;

    if (n == 1) {
        cout << n % MOD << endl;
    } else {
        long long power = modExp(n - 1, n - 1, MOD);
        long long result = (n * power) % MOD;
        cout << result << endl;
    }

    return 0;
}
