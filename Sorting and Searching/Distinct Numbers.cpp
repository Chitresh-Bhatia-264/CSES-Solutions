#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    set<int>st;

    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        st.insert(c);

    }
    cout<< st.size();

   
}