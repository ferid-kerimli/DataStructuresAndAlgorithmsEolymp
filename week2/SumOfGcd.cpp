#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long sum_gcd = 0; 

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                sum_gcd += gcd(arr[i], arr[j]); 
            }
        }

        cout << sum_gcd << endl; 
    }

    return 0;
}
