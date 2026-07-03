#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long modexp(long long base, long long exp) {
    long long res = 1;
    while (exp > 0) {
        if (exp & 1)
            res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

int main() {
    long long n;
    cin >> n;

    cout << modexp(2, n) << "\n";
}