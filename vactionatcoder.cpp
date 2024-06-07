#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+10;
int dp[N][3];

int fun(int ind,int val,vector<vector<int>>v){

if(ind==0) return 0;
int ans=0;

for(int take=0;take<=2;take++){
   if(val!=take) ans=max(ans,fun(ind-1,take,v)+v[ind-1][val]);
}
return ans;

}


signed main(){
memset(dp,0,sizeof(dp));
int n;cin>>n;
vector<vector<int>>v(n+1,vector<int>(3,0));
for(int ind=0;ind<n;ind++){
    for(int val=0;val<=2;val++){
        cin>>v[ind][val];
    }
}
for(int ind=1;ind<=n;ind++){
   
for(int val=0;val<=2;val++){
     int ans=0;
for(int take=0;take<=2;take++){
   if(val!=take) ans=max(ans,dp[ind-1][take]+v[ind-1][val]);
}
dp[ind][val]= ans;
}
}




cout<<max(dp[n][0],max(dp[n][1],dp[n][2]));
}