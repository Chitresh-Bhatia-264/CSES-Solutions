#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(2,0));
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
        cin>>arr[i][1];

    }
    sort(arr.begin(),arr.end(),[](const vector<int>&a,const vector<int>& b){
        return a[1]<b[1];
    });

    int ans=0;
    int lastEnd=0;
    for(auto &movie:arr){
        if(movie[0]>=lastEnd){
            ans++;
            lastEnd=movie[1];
        }
    }
    cout<<ans<<endl;
    return 0;



}
