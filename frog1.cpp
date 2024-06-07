#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+10;
int dp[N];

int fun(int ind,vector<int>v){
if(ind==0){
    return 0;
}
if(dp[ind]!=-1)return dp[ind];

int two=INT_MAX;
int one=fun(ind-1,v)+abs(v[ind]-v[ind-1]);
if(ind>1)  two=fun(ind-2,v)+abs(v[ind]-v[ind-2]);


return dp[ind]=min(one,two);
}


signed main(){
memset(dp,-1,sizeof(dp));
int n,k;cin>>n>>k;
vector<int>v(n);
for(int &x:v){cin>>x;}

dp[0]=0;
for(int ind=1;ind<n;ind++){
int ans=INT_MAX;
for(int val=1;val<=k;val++){
if(ind-val>=0) ans=min(ans,dp[ind-val]+abs(v[ind]-v[ind-val]));
}

 dp[ind]=ans;
}
cout<<dp[n-1];

}