#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int n;cin>>n;
vector<int>v(n);
map<int,int>mp;int mx=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
    mx=max(mx,mp[v[i]]);
}

cout<<mx<<endl;


}