#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    long long reach = 0;

    for (long long coin : a) {
        if (coin > reach + 1) {
            cout << reach + 1 << "\n";
            return 0;
        }
        reach += coin;
    }

    cout << reach + 1 << "\n";

    return 0;
}