#include <iostream>
#include <vector>

using namespace std;

int countKnightPaths(int n, int m) {
    vector<vector<int>> dp(n, vector<int>(m, 0));
    dp[0][0] = 1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i >= 2 && j >= 1) dp[i][j] += dp[i - 2][j - 1];  
            if (i >= 1 && j >= 2) dp[i][j] += dp[i - 1][j - 2];  
        }
    }

    return dp[n - 1][m - 1];
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << countKnightPaths(n, m) << endl;
    return 0;
}
