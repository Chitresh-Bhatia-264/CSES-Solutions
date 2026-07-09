// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m,k;
//     cin>>n>>m>>k;
//     vector<int>arr;
//     vector<int>ar;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     for(int i=0;i<m;i++){
//         int y;
//         cin>>y;
//         ar.push_back(y);
//     }
//     int ans=0;
//     vector<bool>vis(m);

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(!vis[j]&&ar[j]>=arr[i]-k && ar[j]<=arr[i]+k){
//                 ans++;
                
//                 vis[j]=true;
//                 break;

//             }
        
//         }
//     }
//     cout<< ans;
//     return 0;

    

// }



//BRUTE FORCE


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicants(n);
    for (int i = 0; i < n; i++)
        cin >> applicants[i];

    multiset<int> apartments;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        apartments.insert(x);
    }

    sort(applicants.begin(), applicants.end());

    int ans = 0;

    for (int x : applicants) {
        // First apartment with size >= (x-k)
        auto it = apartments.lower_bound(x - k);

        if (it != apartments.end() && *it <= x + k) {
            ans++;
            apartments.erase(it); // Erase only this apartment
        }
    }

    cout << ans << "\n";
    return 0;
}