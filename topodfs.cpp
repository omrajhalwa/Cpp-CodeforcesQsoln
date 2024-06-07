#include<bits/stdc++.h>
using namespace std;
#define int long long


void dfs(int node,int vis[],stack<int>&st,vector<int>adj[]){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,vis,st,adj);
        }
        
    }
    st.push(node);
}


signed main(){
int V=4;
vector<int>adj[V];
adj[0].push_back(1);
adj[1].push_back(2);
adj[2].push_back(3);
adj[3].push_back(0);
int vis[V]={0};
stack<int>st;
for(int i=0;i<V;i++){
    if(!vis[i]){
        dfs(i,vis,st,adj);
    }
}
vector<int>ans;
while(!st.empty()){
    ans.push_back(st.top());
    st.pop();

}

for(auto it:ans){
    cout<<it<<" ";
}

}