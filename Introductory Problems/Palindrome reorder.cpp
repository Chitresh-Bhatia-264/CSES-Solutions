#include<bits/stdc++.h>
using namespace std;
string func(string str){
    string left = "", mid = "";

    unordered_map<char,int>mp;
    for(char ch:str){
        mp[ch]++;

    }
    bool tryone=false;
    for(auto it:mp){
        if(it.second % 2==1 ){
          if(tryone)
                return "NO SOLUTION";
            tryone = true;
            mid = string(1, it.first);

        }
         left += string(it.second / 2, it.first);
    }
       string right = left;
    reverse(right.begin(), right.end());

    return left + mid + right;
}
int main(){
    string str;
    cin>>str;
    string ans=func(str);
    cout<<ans;
    return 0;

}