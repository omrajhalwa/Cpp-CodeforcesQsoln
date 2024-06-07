#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
map<int,int>mp;
map<int,int>m;
//2d vector not in my command
int v1[2001][n+1];
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
    v1[0][i]=v[i];
}


for(int i=1;i<=2000;i++){
    if(i%2!=0){
        m.clear();
    }else{mp.clear();}
    for(int j=0;j<n;j++){
        if(i%2!=0){

        int a=mp[v[j]];
       // cout<<a<<" ";
    v1[i][j]=a;
    v[j]=a;
    
    m[a]++;
        }else{
        
             int a=m[v[j]];
       // cout<<a<<endl;
    v1[i][j]=a;
    v[j]=a;
    
    mp[a]++;
        }
    }
}




int q;cin>>q;
while(q--){
    int x,k;
    cin>>x>>k;
    if(k>2000){
        cout<<v1[2000][x-1]<<endl;
    }else{
        cout<<v1[k][x-1]<<endl;
    }
}

}
}