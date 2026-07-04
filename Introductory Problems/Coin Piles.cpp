// #include<bits/stdc++.h>
// using namespace std;
// int  func(int a,int b){

//         if(a==0 && b==0){
      
//             return 1;
//         }
//         if(a<0 || b<0){
//             return 0;
//         }
//       return   func(a-1,b-2) || func(a-2,b-1);

//     }
//     // int x=a+b;
//     // if(x%3==0){
//     //     cout<<"YES"<<endl;
//     // }
//     // else{
//     //     cout<<"NO"<<endl;
//     // }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         if(func(a,b)==1){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }

//     }
//     return 0;
// }








#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if ((a + b) % 3 == 0 && max(a, b) <= 2 * min(a, b))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}