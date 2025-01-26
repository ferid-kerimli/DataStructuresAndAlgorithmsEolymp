#include <iostream>
#include <cmath>
using namespace std;

long long modPow(long long base, long long exp, long long mod) {
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

int main() {
    long long n, m;
    cin >> n >> m;

    long long sum = 0;
    for (long long i = 1; i <= 100; ++i) {
        long long term = (i * modPow(i, n, m)) % m; 
        sum = (sum + term) % m;
    }

    cout << sum << endl;
    return 0;
}