#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> func(ll n){
    vector<ll>result;
    while(n!=1){
        result.push_back(n);

        if(n%2==0){
            n=n/2;
        }
        else{
            n=n*3+1;

        }

        }
    
    result.push_back(1);
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<ll>res=func(n);
     for (ll x : res){
         cout << x << " ";
    }
    cout<<endl;
    return 0;
}

