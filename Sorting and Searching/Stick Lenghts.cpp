#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int  midiInd=n/2;
    int midEl=arr[midiInd];

    long long op=0;
    for(int i=0;i<n;i++){
        op+=1LL * abs(arr[i]-midEl);
    }
    cout<<op;
    return 0;





}