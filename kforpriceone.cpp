#include<bits/stdc++.h>
using namespace std;

#define int long long



int f(int ind,int p,int k,vector<int>v){

if(ind<0)return 0;
int first=1e9,second=1e9,third=1e9;
third=f(ind-1,p,k,v);
if(p-v[ind]>=0){first=f(ind-1,p-v[ind],k,v)+v[ind];}
if(ind-(k)>=0&&p-v[ind]>=0){
second=f(ind-k,p-v[ind],k,v)+v[ind];
}
return min(min(third,second),first);
}
signed main(){
int t;cin>>t;
while(t--){

int n,p,k;
cin>>n>>p>>k;
vector<int>v(n);
for(int &x:v){cin>>x;}
sort(v.begin(),v.end());

//cout<<f(n-1,p,k,v);
vector<int>ans(n+1,1e9);
vector<vector<int>>dp(n+1,vector<int>(p+1,0));

for(int ind=1;ind<=n;ind++){
    for(int p1=0;p1<=p;p1++){
        int first=1e9,second=1e9;

if(p1-v[ind-1]>=0){first=dp[ind-1][p1-v[ind-1]]+v[ind-1];}
if(ind-(k)>=0&&p1-v[ind-1]>=0){
second=dp[ind-k][p1-v[ind-1]]+v[ind-1];
}
dp[ind][p1]= min(second,first);
//if(ind==n)cout<<dp[ind][p1];
ans[ind]=min(ans[ind],dp[ind][p1]);
    }
}
int ans1=0;
for(int i=1;i<=n;i++){
  // cout<<ans[i];
if(ans[i]<=p){ans1=max(ans1,i);}
}
cout<<ans1<<endl;
}
}