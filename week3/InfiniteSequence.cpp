#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<long long, long long> memo;

long long computeA(long long i, long long p, long long q) {
    if (i == 0) return 1; 
    if (memo.find(i) != memo.end()) return memo[i];  

    return memo[i] = computeA(i / p, p, q) + computeA(i / q, p, q);
}

int main() {
    long long n, p, q;
    cin >> n >> p >> q;

    cout << computeA(n, p, q) << endl;
    return 0;
}
