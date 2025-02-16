#include <iostream>
using namespace std;

long long factorial(int x) {
    long long result = 1;
    for (int i = 2; i <= x; i++) {
        result *= i;
    }
    return result;
}

long long binomial(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int m, n;
    cin >> m >> n;

    cout << binomial(m + n - 2, m - 1) << endl;

    return 0;
}
