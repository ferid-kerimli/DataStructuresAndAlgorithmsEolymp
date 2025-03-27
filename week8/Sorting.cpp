#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    std::sort(arr.begin(), arr.end());
    
    for (const int &num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
