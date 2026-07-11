#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    multiset<pair<int, int>> st;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        st.insert({arr[i], i + 1});   // {value, index}
    }

    for (int i = 0; i < n; i++) {
        // Remove the current element so we don't match it with itself
        st.erase(st.find({arr[i], i + 1}));

        // Find the complement
        auto it = st.lower_bound({x - arr[i], 0});

        if (it != st.end() && it->first == x - arr[i]) {
            cout << i + 1 << " " << it->second << '\n';
            return 0;
        }

        // Insert the current element back
        st.insert({arr[i], i + 1});
    }

    cout << "IMPOSSIBLE\n";
}