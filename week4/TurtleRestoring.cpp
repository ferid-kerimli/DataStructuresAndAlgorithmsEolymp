#include <iostream>
#include <vector>

using namespace std;

void findMinDamagePath(vector<vector<int>>& grid, int n, int m) {
    vector<vector<int>> dp(n, vector<int>(m, 0));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));

    dp[0][0] = grid[0][0];

    for (int j = 1; j < m; j++) {
        dp[0][j] = dp[0][j - 1] + grid[0][j];
        parent[0][j] = {0, j - 1};
    }

    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
        parent[i][0] = {i - 1, 0};
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (dp[i - 1][j] < dp[i][j - 1]) {
                dp[i][j] = dp[i - 1][j] + grid[i][j];
                parent[i][j] = {i - 1, j};
            } else {
                dp[i][j] = dp[i][j - 1] + grid[i][j];
                parent[i][j] = {i, j - 1};
            }
        }
    }

    cout << dp[n - 1][m - 1] << endl;

    vector<pair<int, int>> path;
    int x = n - 1, y = m - 1;
    while (x != -1 && y != -1) {
        path.push_back({x + 1, y + 1}); 
        auto prev = parent[x][y];
        x = prev.first;
        y = prev.second;
    }

    for (int i = path.size() - 1; i >= 0; i--) {
        cout << path[i].first << " " << path[i].second << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    findMinDamagePath(grid, n, m);
    return 0;
}
