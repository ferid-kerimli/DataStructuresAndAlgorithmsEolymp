#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<long long, long long> memo;

long long f(long long n) {
    if (n == 0) return 1;
    if (memo.count(n)) return memo[n];

    return memo[n] = f(n / 2) + f(n / 3);
}

int main() {
    long long n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
