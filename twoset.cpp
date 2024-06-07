#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;


int dp[501][500];
int f(int ind,int target,vector<int>v){


if(target==0)return 1;
if(ind==0)return 0;
if(dp[ind][target]!=-1)return dp[ind][target];
int nottake=f(ind-1,target,v);

int take=0;

if(target>=v[ind-1])take=f(ind-1,target-v[ind-1],v);


return dp[ind][target]=(take+nottake)%mod;
}

signed main(){
int n;cin>>n;
memset(dp,-1,sizeof(dp));
vector<int>v;int total=0;
for(int i=1;i<=n;i++){v.push_back(i);total+=i;}



vector<int>cur(total/2+2,0);
vector<int>prev(total/2+2,0);


    cur[0]=1;prev[0]=1;


for(int ind=1;ind<=n;ind++){
    for(int target=0;target<=total/2;target++){
        int nottake=prev[target];

int take=0;

if(target>=v[ind-1]) take=prev[target-v[ind-1]];


 cur[target]=(take%mod+nottake%mod);
    }

prev=cur;
    
}


if(total%2!=0){
    cout<<0<<endl;
}else{
cout<<cur[total/2]/2;
}
    
}