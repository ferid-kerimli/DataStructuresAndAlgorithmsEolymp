#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> S(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            S[i][j] = A[i][j];
            if (i > 0) S[i][j] += S[i-1][j];
            if (j > 0) S[i][j] += S[i][j-1];
            if (i > 0 && j > 0) S[i][j] -= S[i-1][j-1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << S[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
