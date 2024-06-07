#include<bits/stdc++.h>
using namespace std;
#define int long long


void dfs(int node,int par,vector<int>adj[],vector<int>&vis,vector<int>&cyc,vector<int>&st,bool &give){
if(give)return ;
vis[node]=1;
st.push_back(node);
//cout<<st.back();
for(auto child:adj[node]){
    if(give)return ;
    if(!vis[child]){
        dfs(child,node,adj,vis,cyc,st,give);
    }else if(child!=par){
              
        while(st.size()>0&&child!=st.back()){
            
            cyc.push_back(st.back());
          //  cout<<st.back();
            st.pop_back();
            give=1;
        }
       if(st.size()>0)cyc.push_back(st.back());
      
    }
}
if(give) return;

st.pop_back();





}
signed main(){

    int t;
    cin>>t;
    while(t--){


        
vector<int>hash(3e5+5,0);
int n,a,b;
cin>>n>>a>>b;
vector<int>adj[n+1];
vector<int>vis(n+1,0);
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}

vector<int>cyc;
vector<int>st;
bool give=0;

dfs(1,-1,adj,vis,cyc,st,give);
for(auto it:cyc){hash[it]=1;}
int loc=-1;

auto bfs1=[&](int val){
vector<int>visited(n+2,0);

queue<int>q;
q.push(val);
visited[val]=1;
int dis=-1;
while(!q.empty()){


int siz=q.size();
dis++;




for(int i=0;i<siz;i++){
int node=q.front();
q.pop();

if(hash[node]==1){
       loc=node;
       
        return dis;
    }
for(auto child:adj[node]){

if(!visited[child]){
    
    q.push(child);
    visited[child]=1;
    
}

}
}



}

return dis;

};



auto bfs2=[&](int val,int dest){
vector<int>visited(n+2,0);

queue<int>q;
q.push(val);
visited[val]=1;
int dis=-1;
while(!q.empty()){


int siz=q.size();
dis++;


for(int i=0;i<siz;i++){
int node=q.front();q.pop();
if(node==dest){
       
        return dis;
    }

for(auto child:adj[node]){

if(!visited[child]){
    
    q.push(child);
    visited[child]=1;
    
    
}

}
}



}

return dis;

};






int disb;
if(hash[b]==1){disb=0;loc=b;}
else disb=bfs1(b);

int disa=bfs2(a,loc);
//cout<<disa<<" "<<disb;

if(a==b){
    cout<<"NO"<<endl;
}else if(disa<=disb){
    cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;
}

    }
}