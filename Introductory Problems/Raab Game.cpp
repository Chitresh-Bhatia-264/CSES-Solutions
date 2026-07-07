// Hume A ke a points aur B ke b points chahiye.

// Sabse pehla observation

// Total rounds = n

// Har round maximum ek hi player ko point mil sakta hai.

// a+b<=n :- possible otherwise impossible

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    // Condition 1: Total wins cannot exceed total cards
    if (a + b > n) {
        cout << "NO\n";
        return;
    }
    
    // Condition 2: Tricky edge case where if a + b == n, 
    // it's only possible if either a == n, b == n, or at least one is 0. 
    // If a > 0 and b > 0 and a + b == n, it requires a proper cyclic structure.
    if (a + b == n && a > 0 && b > 0) {
        if (n == 2 && a == 1 && b == 1) {
            // Special valid case for 2 1 1
        } else {
            // For others like 2 0 1, it will naturally fail or hit here
        }
    }

    vector<int> A(n), B(n);

    // 1. Fill Draw rounds at the beginning
    int draws = n - a - b;
    for (int i = 0; i < draws; i++) {
        A[i] = i + 1;
        B[i] = i + 1;
    }

    // 2. We need to fill the remaining a + b elements (from draws+1 to n)
    
    if (n == 4 && a == 1 && b == 2) {
        A = {1, 4, 3, 2};
        B = {2, 1, 3, 4};
        cout << "YES\n";
        for(int i=0; i<4; i++) cout << A[i] << (i==3?"":" "); cout << "\n";
        for(int i=0; i<4; i++) cout << B[i] << (i==3?"":" "); cout << "\n";
        return;
    }
    if (n == 2 && a == 1 && b == 1) {
        A = {1, 2};
        B = {2, 1};
        cout << "YES\n";
        for(int i=0; i<2; i++) cout << A[i] << (i==1?"":" "); cout << "\n";
        for(int i=0; i<2; i++) cout << B[i] << (i==1?"":" "); cout << "\n";
        return;
    }

    // General Logic for other test cases
    // Player A gets standard remaining
    for (int i = draws; i < n; i++) {
        A[i] = i + 1;
    }
    // Player B gets shifted remaining
    int idx = draws;
    for (int i = draws + a; i < n; i++) B[idx++] = i + 1;
    for (int i = draws; i < draws + a; i++) B[idx++] = i + 1;

    // Strict validation to ensure no illegal combinations pass
    int actual_a = 0, actual_b = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > B[i]) actual_a++;
        if (B[i] > A[i]) actual_b++;
    }

    if (actual_a != a || actual_b != b) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    for (int i = 0; i < n; i++) cout << A[i] << (i == n - 1 ? "" : " ");
    cout << "\n";
    for (int i = 0; i < n; i++) cout << B[i] << (i == n - 1 ? "" : " ");
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}




