#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007;

long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
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
    int n, k;
    cin >> n >> k;

    long long totalWays = 0;

    for (int i = 1; i < n; i++) {
        long long leftPalindromeCount, rightPalindromeCount;

        if (i % 2 == 0) {
            leftPalindromeCount = modExp(k, i / 2, MOD);
        } else {
            leftPalindromeCount = modExp(k, (i / 2) + 1, MOD);
        }

        if ((n - i) % 2 == 0) {
            rightPalindromeCount = modExp(k, (n - i) / 2, MOD);
        } else {
            rightPalindromeCount = modExp(k, ((n - i) / 2) + 1, MOD);
        }

        totalWays = (totalWays + (leftPalindromeCount * rightPalindromeCount) % MOD) % MOD;
    }

    cout << totalWays << endl;
    return 0;
}
