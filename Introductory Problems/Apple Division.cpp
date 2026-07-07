// #include<bits/stdc++.h>
// using namespace std;
// int func(int n,vector<int>&arr){
//     int total=accumulate(arr.begin(),arr.end(),0);
//     int half=total/2;
//     vector<int>grp1,grp2;
//     for(int i=0;i<n;i++){
//         if(arr[i]<=half){
//             grp1.push_back(arr[i]);
//             half=half-arr[i];
//         }
//         else{
//             grp2.push_back(arr[i]); 
//         }
//     }
//     int andd=accumulate(grp1.begin(),grp1.end(),0);
//     int orr=accumulate(grp2.begin(),grp2.end(),0);
//     return abs(andd-orr);
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     cout<<func(n,arr);
//     return 0;
// }




// greedy fails because we are not sure that we get optimal answer ,it get correct in few cases

#include<bits/stdc++.h>
using namespace std;
vector<int>grp1,grp2;
long long ans=INT_MAX;
void func(int i,int total,vector<int>&arr){
    int n=arr.size();
     if (i == n) {
        long long sum1 = 0, sum2 = 0;

        for (int x : grp1) sum1 += x;
        for (int x : grp2) sum2 += x;

        ans = min(ans, abs(sum1 - sum2));
        return;
    }
    grp1.push_back(arr[i]);
    
    func(i+1,total-arr[i],arr);
    grp1.pop_back();


    grp2.push_back(arr[i]);

    func(i+1,total,arr);
    grp2.pop_back();


}

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    
    }
    int total=accumulate(arr.begin(),arr.end(),0);
    func(0,total/2,arr);
    cout<<ans;
    return 0;



}