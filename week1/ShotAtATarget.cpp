#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int fullReloads = n / m;
    int remainingShots = n % m; 
    int totalTime = 0;

    int timeFullReloads = fullReloads * a + (remainingShots > 0 ? a : 0);

    int timeSingleReload = n * b;

    int timeCombined = fullReloads * a + remainingShots * b;

    totalTime = min({timeFullReloads, timeSingleReload, timeCombined});

    cout << totalTime << endl;
    return 0;
}
