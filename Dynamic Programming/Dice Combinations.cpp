// #include<bits/stdc++.h>
// using namespace std;
// const int MOD = 1000000007;
// long long func(int n){
//     if(n<0) return 0;
//     if(n==0) return 1;
//     long long ans=0;
//     for(int i=1;i<=6;i++){
//         ans = (ans + func(n - i)) % MOD;
//     }
//     return ans;
        
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<func(n);
//     return 0;



// }

// Basic Recurssion

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
vector<long long> dp;

long long func(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;

    if (dp[n] != -1) return dp[n];

    long long ans = 0;
    for (int i = 1; i <= 6; i++) {
        ans = (ans + func(n - i)) % MOD;
    }

    return dp[n] = ans;
}

int main() {
    int n;
    cin >> n;

    dp.assign(n + 1, -1);

    cout << func(n);
    return 0;
}
