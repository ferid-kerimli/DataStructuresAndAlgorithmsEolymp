#include <iostream>
#include <vector>

using namespace std;

int findMajorityElement(const vector<int> &arr) {
    int candidate = -1, count = 0;
    
    for (int num : arr) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    count = 0;
    for (int num : arr) {
        if (num == candidate) count++;
    }

    return (count > arr.size() / 2) ? candidate : -1;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMajorityElement(arr) << endl;

    return 0;
}
