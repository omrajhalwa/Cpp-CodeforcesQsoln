#include<bits/stdc++.h>
using namespace std;
#define int long long
int f(int ind,int n,vector<int>v){
if(n==0)return 0;
if(ind==0)return -1e9;
int nottake=f(ind-1,n,v);

int take=-1e9;
if(n>=v[ind-1]){
    take=f(ind,n-v[ind-1],v)+1;
}
return max(take,nottake);
}



signed main(){

int n,a,b,c;
cin>>n;
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);



vector<vector<int>>dp(7,vector<int>(n+1,-1e9));
for(int ind=0;ind<=3;ind++)dp[ind][0]=0;


for(int ind=1;ind<=3;ind++){
    for(int val=0;val<=n;val++){
        int nottake=dp[ind-1][val];

int take=-1e9;
if(val>=v[ind-1]){
    take=dp[ind][val-v[ind-1]]+1;
}
dp[ind][val]= max(take,nottake);
    }
}
cout<<dp[3][n];

}