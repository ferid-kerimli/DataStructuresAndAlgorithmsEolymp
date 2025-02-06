#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<long long, long long> memo;

long long computeA(long long i, long long p, long long q, long long x, long long y) {
    if (i <= 0) return 1; 
    if (memo.find(i) != memo.end()) return memo[i];  

    return memo[i] = computeA(i / p - x, p, q, x, y) + computeA(i / q - y, p, q, x, y);
}

int main() {
    long long n, p, q, x, y;
    cin >> n >> p >> q >> x >> y;

    cout << computeA(n, p, q, x, y) << endl;
    return 0;
}
