#include <iostream>
#include <vector>

using namespace std;

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];

    int prev2 = 0, prev1 = nums[0];

    for (int i = 1; i < n; i++) {
        int curr = max(prev1, prev2 + nums[i]); 
        prev2 = prev1;
        prev1 = curr;
    }
    
    return prev1;
}

int main() {
    int n;
    cin >> n;
    vector<int> houses(n);
    for (int i = 0; i < n; i++) {
        cin >> houses[i];
    }

    cout << rob(houses) << endl;
    return 0;
}
