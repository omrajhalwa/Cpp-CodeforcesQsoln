#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;


signed main(){

int n;cin>>n;

int dp[n+2]={0};
dp[0]=1;

for(int i=1;i<=n;i++){

for(int j=1;j<=6&&i-j>=0;j++){
    dp[i]=(dp[i]+dp[i-j])%mod;
}

}

cout<<dp[n]<<endl;


}