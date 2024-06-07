#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[2][100005];
bool f(bool pl,int target,vector<int>v){

if(dp[pl][target]!=-1)return dp[pl][target];
for(int i=0;i<v.size();i++){
    if(v[i]>target){
       // cout<<pl;
        return !pl;

    }
    if(pl==1){
        if(f(!pl,target-v[i],v))return dp[pl][target]=true;
    
    }
    else{ if(f(!pl,target-v[i],v)==0)return dp[pl][target]=false;
    }
}
return dp[pl][target]=!pl;
}


signed main(){

int n,k;
cin>>n>>k;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
memset(dp,-1,sizeof(dp));

if(f(1,k,v)==1){cout<<"First";}
else{cout<<"Second";}


}