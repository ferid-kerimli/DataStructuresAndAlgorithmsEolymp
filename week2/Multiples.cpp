#include <iostream>
#include <map>

using namespace std;

int countPrimeFactors(int x) {
    int count = 0;
    for (int i = 2; i * i <= x; i++) {
        while (x % i == 0) {
            count++;
            x /= i;
        }
    }
    if (x > 1) count++; 
    return count;
}

int findMaxPrimeFactors(int n) {
    int maxFactors = 0, bestNumber = 1;
    
    for (int i = 1; i <= n; i++) {
        int factors = countPrimeFactors(i);
        if (factors > maxFactors || (factors == maxFactors && i > bestNumber)) {
            maxFactors = factors;
            bestNumber = i;
        }
    }
    
    return bestNumber;
}

int main() {
    int n;
    cin >> n;
    cout << findMaxPrimeFactors(n) << endl;
    return 0;
}
