#include <iostream>
#include <cmath>

using namespace std;

int countProperDivisors(long long n) {
    int count = 0;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++; 
            if (i != n / i) count++;
        }
    }
    return count;
}

int main() {
    long long n;
    cin >> n;
    cout << countProperDivisors(n) << endl;
    return 0;
}
