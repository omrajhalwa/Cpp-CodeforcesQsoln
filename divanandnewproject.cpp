#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int t;
cin>>t;
while(t--){
int l;
cin>>l;
vector<pair<int,int>>v1(l),c(l);
vector<int>vv(l+4,0);
for(int i=0;i<l;i++){
    cin>>v1[i].first;
    c[i].first=v1[i].first;
    v1[i].second=(i);
   
}
sort(v1.begin(),v1.end());
int n=l+1;int k=n/2;
vector<int>v;
v.push_back(k);
v.push_back(0);
for(int i=1;i<=k;i++){

    if(k!=n-i){
    v.push_back(n-i);}
    if(k!=i){
    v.push_back(i);}
}


for(int i=0;i<l&&i<n;i++){
    vv[v1[i].second]=v[i+1];
}
int sum=0;

for(int i=0;i<l&&i<n;i++){
    sum+=abs(vv[i]-k)*2*c[i].first;
}
cout<<sum<<endl;
cout<<k<<" ";
for(int i=0;i<l;i++){
    cout<<vv[i]<<" ";
}
cout<<endl;
}
}