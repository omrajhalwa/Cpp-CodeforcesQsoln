#include<bits/stdc++.h>
using namespace std;
#define int long long







signed main(){

int n;
cin>>n;
vector<int>v;
v.push_back(0);
for(int i=0;i<n;i++){
    int x;cin>>x;
    v.push_back(x);
}


vector<vector<int>>dp(n+2,vector<int>(3,0));










for(int ind=1;ind<=n;ind++)
{
    for(int x=0;x<3;x++){


int op1=0;
if(v[ind]==3){
    if(x==1){
      op1=dp[ind-1][2] +1;
    }else if(x==2){
        op1=dp[ind-1][1]+1;
    }else{
        op1=max(op1,max(dp[ind-1][1]+1,dp[ind-1][2]+1));
        if(ind>1){
            op1=max(op1,max(dp[ind-2][1]+1,dp[ind-2][2]+1));
        }
    }
} if(v[ind]==2&&x!=2){
op1=dp[ind-1][2]+1;
if(v[ind]==2&&ind>1){
    op1=max(op1,dp[ind-2][0]+1);
}}
if(v[ind]==1&&x!=1){
    op1=dp[ind-1][1]+1;
    if(ind>1){
        op1=max(op1,dp[ind-2][0]+1);
    }
}

if(v[ind]==0){
    op1=dp[ind-1][0];
}else{
    op1=max(op1,dp[ind-1][0]);
}


dp[ind][x]=op1;

    }
}

cout<<n-dp[n][0];













}