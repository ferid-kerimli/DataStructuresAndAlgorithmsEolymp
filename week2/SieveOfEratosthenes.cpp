#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> generateSmallPrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;
    
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return primes;
}

vector<int> findPrimesInRange(int a, int b) {
    int limit = sqrt(b);
    vector<int> smallPrimes = generateSmallPrimes(limit);
    
    vector<bool> isPrimeInRange(b - a + 1, true);
    
    if (a == 1) isPrimeInRange[0] = false; 
    
    for (int p : smallPrimes) {
        int start = max(p * p, (a + p - 1) / p * p); 
        for (int j = start; j <= b; j += p) {
            isPrimeInRange[j - a] = false;
        }
    }

    vector<int> primes;
    for (int i = 0; i <= b - a; i++) {
        if (isPrimeInRange[i]) {
            primes.push_back(a + i);
        }
    }
    
    return primes;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    vector<int> primes = findPrimesInRange(a, b);
    
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;
    
    return 0;
}
