#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){

int n;cin>>n;
vector<int>v(n+1,0);
vector<int>mi(n+1,0);
vector<int>uni(n+1,0);
map<int,int>mp;
int k=0;
for(int i=1;i<=n;i++){
    cin>>v[i];
    mi[v[i]]=i;
    mp[v[i]]++;
    if(mp[v[i]]==1){
        k++;
       
    }uni[i]=k;
}
int p=0;
for(int i=n;i>0;i--){

    if(v[i]<v[i-1]){
        p=i-1;break;
    }
}
int mx=0;
for(int i=1;i<=p;i++){
   mx=max(mx,mi[v[i]]);
}
cout<<uni[mx]<<endl;
}
}