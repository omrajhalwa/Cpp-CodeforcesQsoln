
#include<bits/stdc++.h>
using namespace std;


signed main(){

int n;
cin>>n;
vector<vector<int>>v(n,vector<int>(n,0));
queue<pair<int,int>>q;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>v[i][j];
        if(v[i][j]==2){
            q.push({i,j});
        }
    }
}


while(!q.empty()){
    int nrow=q.front().first;
    int ncol=q.front().second;
    
}






}