#include <iostream>
#include <vector>

using namespace std;

const int MOD = 12345;

int main() {
    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);

    dp[1] = 2;
    if (n > 1) dp[2] = 3;
    if (n > 2) dp[3] = 5;

    for (int i = 4; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    cout << dp[n] << endl;
    return 0;
}
