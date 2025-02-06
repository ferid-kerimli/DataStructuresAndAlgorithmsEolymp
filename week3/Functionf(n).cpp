#include <iostream>

using namespace std;

typedef long long ll;
const int MOD = 123456789;

ll powerMod(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) 
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    ll n;
    cin >> n;
    cout << powerMod(2, n - 2, MOD) << endl;  
    return 0;
}
