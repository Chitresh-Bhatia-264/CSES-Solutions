#include<bits/stdc++.h>
using namespace std;
int subs(string str){
      int n=str.length();
     if (n == 0) return 0;
    int i=0;
    int j=1;
    int count=1;
    int maxi=1;
  
       while (j < n) {
        if (str[i] == str[j]) {
            count++;
            j++;
        } else {
            maxi = max(maxi, count);
            i = j;
            j++;
            count = 1;
        }
    }

    maxi = max(maxi, count);

    return maxi;
}
int main(){
    string x;
    cin>>x;
    int res=subs(x);
    cout<<res;
    return 0;
}