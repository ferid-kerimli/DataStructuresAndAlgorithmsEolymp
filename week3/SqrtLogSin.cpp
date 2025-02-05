#include <iostream>
#include <cmath>
#include <vector>

const int MOD = 1000000;

int main() {
    const int MAX = 1000000;
    std::vector<int> x(MAX + 1, 0);
    
    x[0] = 1;
    
    for (int i = 1; i <= MAX; ++i) {
        int term1 = x[static_cast<int>(i - std::sqrt(i))];
        int term2 = x[static_cast<int>(std::log(i))];
        int term3 = x[static_cast<int>(i * std::sin(i) * std::sin(i))];
        
        x[i] = (term1 + term2 + term3) % MOD;
    }
    
    int i;
    while (std::cin >> i) {
        if (i == -1) break;
        std::cout << x[i] << std::endl;
    }
    
    return 0;
}
