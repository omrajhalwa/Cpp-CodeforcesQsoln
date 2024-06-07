#include<bits/stdc++.h>
using namespace std;
//#define int long long
 
int f(int ind,int sum,vector<int>v){
 
if(sum==0)return 0;
if(ind==0)return 1e9;
 
    int nottake=f(ind-1,sum,v);
    int take=1e9;
 
    if(v[ind-1]<=sum){
        take=f(ind,sum-v[ind-1],v)+1;
    }
 
    return min(take,nottake);
}
 
 
signed main(){
 
int n,s;cin>>n>>s;
vector<int>v(n);
for(int &x:v){cin>>x;}
//cout<<f(n-1,s,v);
 
vector<vector<int>>dp(n+1,vector<int>(s+1,1e9));
for(int i=0;i<=n;i++){dp[i][0]=0;}
 
 
for(int ind=1;ind<=n;ind++){
    for(int sum=0;sum<=s;sum++){
        int nottake=dp[ind-1][sum];
    int take=1e9;
 
    if(v[ind-1]<=sum){
        take=dp[ind][sum-v[ind-1]]+1;
    }
 
    dp[ind][sum]= min(take,nottake);
    }
}
 
if(dp[n][s]==1e9){cout<<-1<<endl;}
else cout<<dp[n][s];
}