#include<bits/stdc++.h>
using namespace std;
vector<int>func(int n){
    vector<int>res;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            res.push_back(i);
        }

    }
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            res.push_back(i);
        }

    }
    return res;
    
}
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n<4){
        cout<<"NO SOLUTION";
        return 0;
    }
    vector<int>res=func(n);
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}