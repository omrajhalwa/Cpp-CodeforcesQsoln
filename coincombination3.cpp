#include<bits/stdc++.h>
using namespace std;

 
signed main(){
 int mod=1e9+7;
int n,target;
cin>>n>>target;
vector<int>v(n);
for(int &x:v){cin>>x;}

vector<vector<int>>dp(n+1,vector<int>(target+1,0));
for(int ind=0;ind<=n;ind++){
    dp[ind][0]=1;
}
for(int ind=1;ind<=n;ind++){

for(int sum=0;sum<=target;sum++){
int nottake=dp[ind-1][sum];
int take=0;

if(v[ind-1]<=sum){
    take=dp[ind][sum-v[ind-1]];
}

dp[ind][sum]=(take+nottake)%mod;
}
}
cout<<dp[n][target];
}