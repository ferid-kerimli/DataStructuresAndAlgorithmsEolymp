#include <iostream>

using namespace std;

void primeFactorization(int n) {
    for (int i = 2; i * i <= n; i++) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            cout << i;
            if (count > 1) cout << "^" << count;
            cout << " ";
        }
    }
    if (n > 1) {
        cout << n; 
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    primeFactorization(n);
    return 0;
}
