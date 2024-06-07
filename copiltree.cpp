#include<bits/stdc++.h>
using namespace std;
#define int long long


int dfs(vector<int>adj[],int node,int par,int vis[],map<pair<int,int>,int>&mp){
vis[node]=1;


int mx=1;
for(auto it:adj[node]){
    int ans=0;
    if(!vis[it]){
        if(mp[{node,par}]>mp[{it,node}]){
          ans=1;
        }else if(mp[{par,node}]>mp[{it,node}]){
           ans=1;
        }else if(mp[{node,par}]>mp[{node,it}]){
            ans=1;
        }else if(mp[{par,node}]>mp[{node,it}]){
            ans=1;
        }
        ans+=dfs(adj,it,node,vis,mp);
    }
    mx=max(mx,ans);
}


return mx;
}










void solve(){
int n;cin>>n;
int vis[n+2]={0};

vector<int>adj[n+2];



map<pair<int,int>,int>mp;

for(int i=1;i<n;i++){
    int a,b;cin>>a>>b;

mp[{a,b}]=i;
mp[{b,a}]=i;


   adj[a].push_back(b);
   adj[b].push_back(a);
 
}



int ans=0;
for(auto it:adj[1]){
    ans=max(ans,dfs(adj,it,1,vis,mp));
}





 cout<<ans<<endl;

}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

int t;cin>>t;
while(t--){
    solve();
}

  
}