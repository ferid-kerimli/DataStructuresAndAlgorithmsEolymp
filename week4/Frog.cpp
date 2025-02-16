#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int minFrogCost(int n, vector<int>& h) {
    vector<int> dp(n, 0);
    
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);

    for (int i = 2; i < n; i++) {
        dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), 
                    dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    return dp[n - 1];
}

int main() {
    int n;
    cin >> n;
    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    cout << minFrogCost(n, h) << endl;
    return 0;
}
