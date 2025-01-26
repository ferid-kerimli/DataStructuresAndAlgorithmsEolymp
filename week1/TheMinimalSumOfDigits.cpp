#include <iostream>
#include <climits>

using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int m, n;
    cin >> m >> n;

    int minSum = INT_MAX; 
    int count = 0; 

    for (int i = m; i <= n; ++i) {
        int currentSum = sumOfDigits(i);
        if (currentSum < minSum) {
            minSum = currentSum;
            count = 1;         
        } else if (currentSum == minSum) {
            count++;         
        }
    }

    cout << count << endl;
    return 0;
}
