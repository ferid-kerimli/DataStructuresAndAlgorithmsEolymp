#include <iostream>
#include <vector>

using namespace std;

long long maxProfit(vector<int>& prices) {
    int n = prices.size();
    long long profit = 0;
    int maxFuturePrice = 0;

    for (int i = n - 1; i >= 0; --i) {
        maxFuturePrice = max(maxFuturePrice, prices[i]);
        profit += maxFuturePrice - prices[i];
    }

    return profit;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);

    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    cout << maxProfit(prices) << endl;
    return 0;    
}
