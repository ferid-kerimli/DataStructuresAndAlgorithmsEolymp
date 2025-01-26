#include <iostream>
using namespace std;

long long productOfDigits(long long n) {
    long long product = 1;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

int calculatePersistence(long long n) {
    int steps = 0;
    while (n >= 10) { 
        n = productOfDigits(n);
        steps++;
    }
    return steps;
}

int main() {
    long long n;
    while (cin >> n) { 
        cout << calculatePersistence(n) << endl;
    }
    return 0;
}