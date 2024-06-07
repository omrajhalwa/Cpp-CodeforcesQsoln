#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int f(int row,int col,vector<string>v){

if(row<1||col<1)return 0;
if(v[row-1][col-1]=='#')return 0;

if(row==1&&col==1)return 1;

int left=f(row,col-1,v);
int up=f(row-1,col,v);

return (left+up)%mod;

}
signed main(){
fast_io;
int n,m;
cin>>n>>m;
vector<string>v;
for(int i=0;i<n;i++){
    string s="";
    cin>>s;
    v.push_back(s);
}


vector<vector<int>>dp(n+1,vector<int>(m+1,0));

dp[1][1]=1;
for(int row=1;row<=n;row++){
    for(int col=1;col<=m;col++){
        if(v[row-1][col-1]!='#'){
            
int left=dp[row][col-1];
int up=dp[row-1][col];

dp[row][col]=(left+up)%mod;
dp[1][1]=1;
        }
    }
}

cout<<dp[n][m];


}