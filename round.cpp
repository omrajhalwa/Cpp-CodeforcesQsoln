#include<bits/stdc++.h>
using namespace std;
#define int long long
//jai shree ram.......................
pair<pair<int,int>,int> bfs(vector<int>adj[],int node,int vis[]){
vector<int>p;
vis[node]=1;
queue<int>q;
q.push(node);
int length=0;
while(!q.empty()){
int nod=q.front();
length++;
q.pop();
//cout<<nod<<" ";
if(adj[nod].size()==1){
        p.push_back(nod);
    }
for(auto it:adj[nod]){
    if(!vis[it]){
        vis[it]=1;
    q.push(it);
    }
   
    
}

}




pair<pair<int,int>,int>k;
k.first.first=-1;
k.first.second=-1;
if(p.size()>1){
   k.first.first=p[0];
k.first.second=p[1]; 
}
k.second=length;
return k;
}


signed main(){

    int t;cin>>t;
    while(t--){
int n;cin>>n;
    vector<int>adj[n+1];
int vis[n+1]={0};
map<int,set<int>>mp;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        mp[i].insert(x);
        mp[x].insert(i);
       
    }
for(auto it:mp){
    
    for(auto itt:it.second){
        adj[it.first].push_back(itt);
    }
}





int mni=0,mnj=0,mx=0,mn=0;



for(int i=1;i<=n;i++){
    pair<pair<int,int>,int>k;
    if(!vis[i]){
k=bfs(adj,i,vis);mx++;
   if(k.first.first==k.first.second&&k.second>2){
            mni++;
        }
    else{
        mnj++;
    }
    }
}


mn=mni;
if(mnj>0){mn+=1;}


cout<<mn<<" "<<mx<<endl;

}
}