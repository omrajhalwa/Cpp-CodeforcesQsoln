#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
int f(int ind,int sum,vector<int>v){

if(sum==0)return 0;
if(ind==0)return 1e9;

    int nottake=f(ind-1,sum,v);
    int take=1e9;

    if(v[ind-1]<=sum){
        take=f(ind,sum-v[ind-1],v)+1;
    }

    return min(take,nottake);
}


signed main(){

int n,s;cin>>n>>s;
vector<int>v(n);
for(int &x:v){cin>>x;}
//cout<<f(n-1,s,v);

vector<int>dp(s+1,0);
dp[0]=1;




    for(int sum=0;sum<=s;sum++){
       for(int i=0;i<n;i++){
        if(sum-v[i]>=0){
        (dp[sum]+=dp[sum-v[i]])%=mod;
        }
       }
    }

cout<<dp[s];

}