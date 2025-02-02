#include <iostream>

using namespace std;

const int MOD = 9929;
const int MAX_N = 500;

long long fact[MAX_N + 1], invFact[MAX_N + 1];

long long power(long long base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void precomputeFactorials() {
    fact[0] = 1;
    for (int i = 1; i <= MAX_N; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    
    invFact[MAX_N] = power(fact[MAX_N], MOD - 2, MOD); 
    for (int i = MAX_N - 1; i >= 0; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

long long binomialCoeff(int n, int k) {
    if (k > n) return 0;
    return (fact[n] * invFact[k] % MOD) * invFact[n - k] % MOD;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    precomputeFactorials();
    cout << binomialCoeff(n, k) << endl;
    
    return 0;
}
