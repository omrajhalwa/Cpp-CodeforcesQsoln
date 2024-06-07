#include<bits/stdc++.h>
using namespace std;
#define int long long

int f(int ind,vector<int>v,vector<int>adj[],vector<int>&dp){

if(ind==v.size())return 0;
   


   if(dp[ind]!=-1){
    return dp[ind];
   }
        int take=INT_MAX;
        int nottake=f(ind+1,v,adj,dp)+1;
        int next=0;
        auto id=upper_bound(adj[v[ind]].begin(),adj[v[ind]].end(),ind);
            if(id!=adj[v[ind]].end()){
                
                    next=adj[v[ind]][id-adj[v[ind]].begin()];
                    //cout<<ind<<next<<" ";
             take=min(f(next+1,v,adj,dp),f(next,v,adj,dp));
            }

            return dp[ind]=min(take,nottake);

}

signed main(){
int t;cin>>t;
while(t--){

int n;cin>>n;
vector<int>v(n);
vector<int>adj[n+1];
for(int i=0;i<n;i++){cin>>v[i];adj[v[i]].push_back(i);}
vector<int>dp(n+2,0);


for(int ind=n-1;ind>=0;ind--){

int take=INT_MAX;
        int nottake=dp[ind+1]+1;
        int next=0;
        auto id=upper_bound(adj[v[ind]].begin(),adj[v[ind]].end(),ind);
            if(id!=adj[v[ind]].end()){
                
                    next=adj[v[ind]][id-adj[v[ind]].begin()];
                    //cout<<ind<<next<<" ";
             take=min(dp[next+1],dp[next]);
            }

             dp[ind]=min(take,nottake);

}
cout<<n-dp[0]<<endl;
}
}