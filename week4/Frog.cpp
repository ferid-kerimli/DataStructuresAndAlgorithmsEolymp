#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int minCostFrogJump(int n, vector<int>& heights) {
    vector<int> dp(n, 0);

    dp[1] = abs(heights[1] - heights[0]);

    for (int i = 0; i < n; i++)
    {
        int oneStep = dp[i - 1] + abs(heights[i] - heights[i - 1]);
        int twoStep = dp[i - 2] + abs(heights[i] - heights[i - 2]);
        dp[i] = min(oneStep, twoStep);
    }

    return dp[n - 1];    
}

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    cout << minCostFrogJump(n, heights) << endl;
    return 0;
}
