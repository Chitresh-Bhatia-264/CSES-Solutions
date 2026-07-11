//prefix sum
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;


    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
   vector<long long> prefix(n);

prefix[0] = arr[0];

for(int i = 1; i < n; i++)
    prefix[i] = prefix[i-1] + arr[i];

long long minPrefix = 0;
long long maxSum = LLONG_MIN;

for(int i = 0; i < n; i++) {
    maxSum = max(maxSum, prefix[i] - minPrefix);
    minPrefix = min(minPrefix, prefix[i]);
}

cout << maxSum;
    return 0;


}