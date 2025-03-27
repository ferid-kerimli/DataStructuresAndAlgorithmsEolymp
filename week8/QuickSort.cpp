#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr;
    int num;
    
    while (std::cin >> num) {
        arr.push_back(num);
    }
    
    std::sort(arr.begin(), arr.end());
    
    for (const int &num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
