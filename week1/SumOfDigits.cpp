#include <iostream>
#include <cmath> 

using namespace std;

int calculateSumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += abs(n % 10);
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    int sum = calculateSumOfDigits(n);
    cout << sum << endl;

    return 0;
}
