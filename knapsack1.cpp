#include<bits/stdc++.h>
using namespace std;
#define int long long 

int f(int ind,int pri,vector<int>&weights,vector<int>&prices)
{
    if(pri==0)return 0;
if(ind==0)return 1e13;
int nottake=f(ind-1,pri,weights,prices);
int take=1e13;
if(pri-prices[ind-1]>=0){
take=f(ind-1,pri-prices[ind-1],weights,prices)+weights[ind-1];
}
return min(take,nottake);
}


signed main(){
    
int n,W;
cin>>n>>W;
vector<vector<int>>dp(n+1,vector<int>(1e5+10,1e13));
vector<int>weights(n);
vector<int>prices(n);int sum=0;int ans=0;


for(int ind=0;ind<=n;ind++)dp[ind][0]=0;
for(int i=0;i<n;i++){cin>>weights[i]>>prices[i];sum+=prices[i];}

for(int ind=1;ind<=n;ind++){
    for(int pri=0;pri<=sum;pri++){
        int nottake=dp[ind-1][pri];
int take=1e13;
if(pri-prices[ind-1]>=0){
take=dp[ind-1][pri-prices[ind-1]]+weights[ind-1];

}
dp[ind][pri]= min(take,nottake);

if(dp[ind][pri]<=W){
    ans=max(ans,pri);
}
}
    }


cout<<ans<<endl;

}