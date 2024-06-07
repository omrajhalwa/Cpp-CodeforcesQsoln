#include<bits/stdc++.h>
using namespace std;
#define int long long

pair<int,int>dfs(int node,vector<int>adj[],int vis[],string s,int &mx){

vis[node]=1;
pair<int,int>p;p.first=0;p.second=0;
if(s[node-1]=='B'){p.first++;}
    else{p.second++;}
for(auto it:adj[node]){
   
    if(!vis[it]){
        pair<int,int>k;k.first=0;k.second=0;
        k=dfs(it,adj,vis,s,mx);
    
    p.first+=k.first;
    p.second+=k.second;
    }
 
    
}
 if(p.first==p.second){
    mx++;
    }




return p;
}




signed main(){
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;
int vis[n+2]={0};
vector<int>adj[n+2];
for(int i=2;i<=n;i++){
    int x;cin>>x;
    adj[x].push_back(i);
}
string s="";
cin>>s;
int mx=0;
dfs(1,adj,vis,s,mx);
cout<<mx<<endl;


}
}







