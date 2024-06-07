#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,m;
cin>>n>>m;
map<int,int>mp;
for(int i=0;i<m;i++){
    int a,b,c;
    cin>>a>>b>>c;
    mp[b]++;
}
int x;
for(int i=1;i<=n;i++){
    if(mp[i]==0){
        x=i;
        break;
    }
}
for(int i=1;i<=n;i++){
    if(i!=x){
        cout<<x<<" "<<i<<endl;
    }
}

}
}