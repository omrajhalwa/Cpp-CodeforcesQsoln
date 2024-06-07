#include<bits/stdc++.h>
using namespace std;
int dp[101][100001];
const int mod=1e9+7;
int f(int ind,int target,vector<int>v){

if(target==0)return 1;
if(ind<0)return 0;

if(dp[ind][target]!=-1)return dp[ind][target];

int take=0;
for(int i=0;i<=v[ind];i++){
if(target>=i){
    take+=f(ind-1,target-i,v)%mod;
}
}
return dp[ind][target]=take%mod;
}


signed main(){

int n,target;
cin>>n>>target;
vector<int>v(n);
for(int &x:v){cin>>x;}
memset(dp,-1,sizeof(dp));
cout<<f(n-1,target,v);

}