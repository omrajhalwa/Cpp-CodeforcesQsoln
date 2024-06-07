#include<bits/stdc++.h>
using namespace std;
#define int long long 


void solve(){

int V=7;
vector<int>adj[V];
adj[1].push_back(0);
adj[2].push_back(0);
adj[2].push_back(1);
adj[3].push_back(1);

adj[5].push_back(2);
adj[0].push_back(3);
adj[5].push_back(4);














int indegree[V]={0};
for(int i=0;i<V;i++){

    for(auto it:adj[i]){
        indegree[it]++;
    }
}
queue<int>q;
for(int i=0;i<V;i++)
{
    if(indegree[i]==0){
        q.push(i);
    }
}
vector<int>topo;
while(!q.empty()){

int node=q.front();
q.pop();
topo.push_back(node);

for(auto it:adj[node]){
indegree[it]--;
    if(indegree[it]==0){
        q.push(it);
    }
}



}

for(auto it:topo){cout<<it<<" ";}
}


signed main(){

solve();



}