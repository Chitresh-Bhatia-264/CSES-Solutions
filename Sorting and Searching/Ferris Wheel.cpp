#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> weight(n);

    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    sort(weight.begin(), weight.end());

    int i = 0;
    int j = n - 1;
    int ans = 0;

    while (i <= j) {
        if (weight[i] + weight[j] <= k) {
            i++;  
        }

        j--;       
        ans++;
    }

    cout << ans << "\n";

    return 0;
}