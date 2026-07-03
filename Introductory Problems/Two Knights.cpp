// // for 2*2 matrix to put the knights into the matrix we can 
// //put in 6 ways . This is done by 4C2 which is 4*3/2=6 ways 
// // which is k*kC2 
// // knights attack in 2 1/2 position so we have to find no of 2*3 and 3*2 rectangles
// // as knights can only attack in 2*3 and 3*2 rectangles only
// // so no of 2*3 rectangles = (k-1)(k-2)
// //no of 3*2 rectangles = (k-2)(k-1)

// // so total rectangles = 2(k-1)(k-2)

// //each ractangle contribute 2 attacks so 4(k-1)(k-2)
// //attacks = 4(k-1)(k-2)
// //final formula= k*kC2-4(k-1)(k-2)


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const int N=1e6+5;
// const ll MOD = 1e9 + 7;
// ll fact[N],invFact[N];

// ll modexp(ll a , ll b){
//     ll res=1;
//     while(b){
//         if (b & 1) res = res * a % MOD;
//         a = a * a % MOD;
//         b >>= 1;
//     }
//     return res;
// }
// void precompute() {
//     fact[0] = 1;
//     for (int i = 1; i < N; i++) {
//         fact[i] = fact[i - 1] * i % MOD;
//     }

//     invFact[N - 1] = modexp(fact[N - 1], MOD - 2);

//     for (int i = N - 2; i >= 0; i--) {
//         invFact[i] = invFact[i + 1] * (i + 1) % MOD;
//     }
// }
// long long nCr(long long n, long long r) {
//     if (r < 0 || r > n) return 0;
//     return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
// }
// ll func(ll n){
//      for (ll k = 1; k <= n; k++) {

//         // total ways = C(k^2, 2)
//         ll total = nCr(k * k, 2);

//         // attacking pairs = 4(k-1)(k-2)
//         ll attack = 4 * (k - 1) * (k - 2);

//         cout << (total - attack) << "\n";

        
//     }
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n;
//     cin >> n;

//     func(n);

//     return 0;
// }

//The above solution crash as k² can be up to 10⁸
// fact[] only goes up to 1e6



#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    for (ll k = 1; k <= n; k++) {
        ll total = (k * k) * (k * k - 1) / 2;
        ll attack = 4 * (k - 1) * (k - 2);
        cout << total - attack << "\n";
    }

    return 0;
}