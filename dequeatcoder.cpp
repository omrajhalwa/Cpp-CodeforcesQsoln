#include<bits/stdc++.h>
using namespace std;
#define int long long

//int dp[3002][3002];
int f(int ind1,int ind2,vector<int>v,int n){
if(ind1>ind2)return 0;
if(ind1==ind2){return v[ind1-2];}
//if(dp[ind1][ind2]!=-1)return dp[ind1][ind2];
int left=v[ind1]+min(f(ind1+2,ind2,v,n),f(ind1+1,ind2-1,v,n));
int right=v[ind2]+min(f(ind1,ind2-2,v,n),f(ind1+1,ind2-1,v,n));

return max(left,right);
}




signed main(){

int n;cin>>n;
vector<int>v(n);
int total=0;
for(int i=0;i<n;i++){
    cin>>v[i];total+=v[i];
}
//memset(dp,-1,sizeof(dp));


vector<vector<int>>dp(n+4,vector<int>(n+4,0));
for(int ind1=2;ind1<=n+1;ind1++){
    for(int ind2=2;ind2<=1+n;ind2++){
        if(ind1==ind2)dp[ind1][ind2]=v[ind1-2];
    }
}

for(int ind1=n+1;ind1>=2;ind1--){
    for(int ind2=ind1;ind2<=n+1;ind2++){
        
        int left=3e9,right=3e9;
        left=v[ind1-2]+min(dp[ind1+2][ind2],dp[ind1+1][ind2-1]);
        right=v[ind2-2]+min(dp[ind1][ind2-2],dp[ind1+1][ind2-1]);

         dp[ind1][ind2]=max(left,right);
        
    }
}



int player1=dp[0+2][n-1+2];
int player2=total-player1;

cout<<player1;

}