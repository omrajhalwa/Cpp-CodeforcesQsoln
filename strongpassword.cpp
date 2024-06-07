#include<bits/stdc++.h>
using namespace std;
#define int long long

bool f(int ind1,int ind2,string s1,string s2){

if(ind2==0)return 1;
if(ind1==0)return 0;


    if(s1[ind1-1]==s2[ind2-1]){
        return f(ind1-1,ind2-1,s1,s2);
    }

    return f(ind1-1,ind2,s1,s2)||f(ind1,ind2-1,s1,s2);
}
bool check(int n,int m,string s1,string s2){

vector<vector<bool>>dp(n+1,vector<bool>(m+1,0));
for(int ind1=0;ind1<=n;ind1++){
    dp[ind1][0]=1;
}

for(int ind1=1;ind1<=n;ind1++){
    for(int ind2=1;ind2<=m;ind2++){
        if(s1[ind1-1]==s2[ind2-1]){
        dp[ind1][ind2]=  dp[ind1-1][ind2-1];
    }else{

    dp[ind1][ind2]= dp[ind1-1][ind2]||dp[ind1][ind2-1];
    }
    }
}

return dp[n][m];
}


signed main(){

string s1="";
cin>>s1;
int m;cin>>m;
int a="";
int b="";
cin>>a;

cout<<char(10);




}