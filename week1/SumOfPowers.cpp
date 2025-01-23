#include <iostream>
using namespace std;

long long modExp(long long base, long long exponent, long long mod) {
    long long result = 1;
    base %= mod;
    while (exponent > 0) {
        if (exponent % 2 == 1) { 
            result = (result * base) % mod;
        }
        base = (base * base) % mod;  
        exponent /= 2; 
    }
    return result;
}

int main() {
    long long n, m;
    cin >> n >> m;

    long long sum = 0; 

    for (long long i = 1; i <= 99; ++i) {
        long long term = (i * (i + 1)) % m;           
        term = (term * modExp(i + 1, n, m)) % m;          
        sum = (sum + term) % m;                          
    }

    cout << sum << endl;  
    return 0;
}
