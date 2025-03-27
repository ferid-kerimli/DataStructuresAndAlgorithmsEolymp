#include <iostream>
#include <vector>

int countSwaps(std::vector<int>& arr) {
    int swaps = 0;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }
    return swaps;
}

int main() {
    int n;
    std::cin >> n;
    
    while (n--) {
        int l;
        std::cin >> l;
        std::vector<int> train(l);
        
        for (int i = 0; i < l; i++) {
            std::cin >> train[i];
        }
        
        int swaps = countSwaps(train);
        std::cout << "Optimal train swapping takes " << swaps << " swaps." << std::endl;
    }
    
    return 0;
}
