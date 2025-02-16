#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000003;
const int MAX_N = 2000;  
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

void precomputeFactorials() {
    fact[0] = 1;
    for (int i = 1; i < MAX_N; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[MAX_N - 1] = modPow(fact[MAX_N - 1], MOD - 2, MOD);
    for (int i = MAX_N - 2; i >= 0; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

long long binomial(int n, int k) {
    if (k > n || k < 0) return 0;
    return ((fact[n] * invFact[k]) % MOD * invFact[n - k]) % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precomputeFactorials();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << binomial(2 * (n - 1), n - 1) << "\n";
    }

    return 0;
}
