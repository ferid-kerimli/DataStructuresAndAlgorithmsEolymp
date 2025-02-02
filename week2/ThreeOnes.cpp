#include <iostream>
using namespace std;

const int MOD = 12345;

int countValidSequences(int n) {
    if (n == 1) return 2;
    if (n == 2) return 3;
    if (n == 3) return 4;

    int a = 2, b = 3, c = 4; 
    int result = 0;

    for (int i = 4; i <= n; i++) {
        result = (a + b + c) % MOD;
        a = b;
        b = c;
        c = result;
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    cout << countValidSequences(n) << endl;
    return 0;
}
