#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
int f(int ind1,int ind2,string k,string s){


if(ind2==0)return 1;
if(ind1==0)return 0;

int notpick=f(ind1-1,ind2,k,s);

int take=0;

if(k[ind1-1]==s[ind2-1]){
   take=f(ind1-1,ind2-1,k,s);
}

return take+notpick;
}


signed main(){

string s="chokudai";
string k="";
cin>>k;
int n=s.size();
int m=k.size();


vector<vector<int>>dp(m+1,vector<int>(n+1,0));
for(int i=0;i<=m;i++){
    dp[i][0]=1;
}

for(int ind1=1;ind1<=m;ind1++){
    for(int ind2=1;ind2<=n;ind2++){
int notpick=dp[ind1-1][ind2];

int take=0;

if(k[ind1-1]==s[ind2-1]){
   take=dp[ind1-1][ind2-1];
}

dp[ind1][ind2]= (take+notpick)%mod;
    }
}
cout<<dp[m][n];
}