#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long k = max(y, x);
        long long k2 = k * k;
        long long k1 = (k - 1) * (k - 1);

        if (k % 2 == 0) {
            if (y == k)
                cout << k2 - x + 1 << "\n";
            else
                cout << k1 + y << "\n";
        } else {
            if (x == k)
                cout << k2 - y + 1 << "\n";
            else
                cout << k1 + x << "\n";
        }
    }

    return 0;
}