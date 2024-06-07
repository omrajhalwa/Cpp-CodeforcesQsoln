#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;

int f(int ind,int target,vector<int>v){

if(target==0)return 1;
if(ind==0)return 0;
int ans=0;
for(int i=0;i<=v[ind-1];i++){
    ans+=f(ind-1,target-i,v);
}


return ans;
}

signed main(){
int n,k;cin>>n>>k;
vector<int>v(n);
for(int &x:v){
    cin>>x;
}



vector<vector<int>>dp(n+1,vector<int>(k+2,0));
vector<int>prev(k+2,0);
vector<int>cur(k+2,0);

for(int ind=0;ind<=n;ind++)prev[0]=1;



    for(int target=0;target<=k;target++){
        int ans=0;
     for(int i=0;i<=v[ind-1];i++){
        if(target-i>=0)ans+=prev[target-i];
       }  


cur[target]= ans;
    }

cout<<dp[n][k];




}