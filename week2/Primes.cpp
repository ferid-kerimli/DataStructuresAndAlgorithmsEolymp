#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

using namespace std;

const int MAX_N = 10000000;

vector<bool> sieve(MAX_N + 1, true);
vector<int> prime_count(MAX_N + 1, 0);

void preprocess() {
    sieve[0] = sieve[1] = false; 

    for (int i = 2; i * i <= MAX_N; ++i) {
        if (sieve[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                sieve[j] = false;
            }
        }
    }

    for (int i = 1; i <= MAX_N; ++i) {
        prime_count[i] = prime_count[i - 1] + (sieve[i] ? 1 : 0);
    }
}

int main() {
    preprocess();

    string line;
    bool first_case = true;

    while (getline(cin, line)) {
        if (line.empty()) continue;

        int m, n;
        stringstream ss(line);
        ss >> m >> n;

        if (!first_case) {
            cout << endl; 
        }
        first_case = false;

        cout << prime_count[n] - prime_count[m - 1] << endl;
    }

    return 0;
}
