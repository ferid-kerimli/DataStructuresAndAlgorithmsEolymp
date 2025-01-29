#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int numerator = a * d + b * c;
    int denominator = b * d;

    int gcd = __gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;

    if (denominator == 1) {
        cout << numerator << endl;
    } else {
        cout << numerator << " " << denominator << endl;
    }

    return 0;
}
