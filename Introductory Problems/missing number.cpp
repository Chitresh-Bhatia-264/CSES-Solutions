#include<bits/stdc++.h>
using namespace std;
int func(int n,vector<int>&arr){
    set<int>st;
    for(int x:arr){
        st.insert(x);

    }
    for(int i=1;i<=n;i++){
        if(st.find(i)==st.end()){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>num;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        num.push_back(x);
    }
    int res=func(n,num);
    cout<<res;
    return 0;

}