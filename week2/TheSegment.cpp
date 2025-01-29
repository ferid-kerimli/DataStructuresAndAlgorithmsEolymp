#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << __gcd(abs(x2 - x1), abs(y2 - y1)) + 1 << endl;

    return 0;
}
