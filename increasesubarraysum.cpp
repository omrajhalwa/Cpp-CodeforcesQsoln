#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while (t--)
{


int n, val;
cin>>n>>val;
vector<int>v(n);for(int &x:v){cin>>x;}
vector<vector<int>>dp(n,vector<int>(n,0));
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
        sum+=v[j];
        dp[i][j]=sum;
    }
}


for(int k=0;k<n;k++){
    int mn=dp[0][k];
    for(int i=0,j=k;i<n&&j<n;i++,j++){
         mn=max(dp[i][j],mn);
         dp[i][j]=mn;
    }
}



vector<int>ans;

for(int k=0;k<=n;k++){
    int mx=0;
for(int i=0;i<n;i++){
    int mul=0;
    if(n-i>=k){mul=val*k;}
    else{mul=val*(n-i);}
    mx=max(mx,dp[i][n-1]+mul);
}
ans.push_back(mx);
}
for(auto it:ans){cout<<it<<" ";}
cout<<endl;
}
}

