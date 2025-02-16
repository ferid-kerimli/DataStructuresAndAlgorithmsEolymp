#include <iostream>
#include <vector>

using namespace std;

const int MOD = 9929;
const int MAX_N = 100; 
vector<long long> fact(MAX_N), invFact(MAX_N);

long long modPow(long long base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod; 
        exp /= 2;
    }
    return result;
}

void precomputeFactorials(int n, int mod) {
    fact[0] = 1;
    for (int i = 1; i <= 2 * n; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    invFact[2 * n] = modPow(fact[2 * n], mod - 2, mod);
    for (int i = 2 * n - 1; i >= 0; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % mod;
    }
}

long long binomial(int n, int k, int mod) {
    if (k > n || k < 0) return 0;
    return ((fact[n] * invFact[k]) % mod * invFact[n - k]) % mod;
}

int main() {
    int n;
    cin >> n;

    precomputeFactorials(n, MOD);
    long long totalWays = 0;

    for (int i = 0; i < n; i++) {    
        for (int j = 0; j < n; j++) { 
            long long waysHodja = binomial(i + j, i, MOD);
            long long waysDonkey = binomial((2 * (n - 1) - i - j), (n - 1 - i), MOD);
            totalWays = (totalWays + (waysHodja * waysDonkey) % MOD) % MOD;
        }
    }

    cout << totalWays << endl;
    return 0;
}
