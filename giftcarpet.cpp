#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,m;
cin>>n>>m;
vector<string>v;
for(int i=0;i<n;i++){
string s="";
cin>>s;
v.push_back(s);
}
string k="vika";
int p=0;
for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
      
        if(p<4&&v[i][j]==k[p]){
            p++;
            break;
        }
    }
}

if(p==4){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
}
}