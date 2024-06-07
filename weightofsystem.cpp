#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,m;cin>>n>>m;
map<int,int>mp;
vector<pair<int,int>>v(m);
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    v[i].first=b;
    mp[a]=i+1;
    v[i].second=a;
}
sort(v.begin(),v.end());
vector<pair<int,int>>p;
for(int i=0;i<2*n;i++){
p.push_back(make_pair(v[i].second,v[i].first));
}
sort(p.begin(),p.end());
int sum=0;
for(int i=0;i<n;i++){
    sum+=p[i].second+p[2*n-1-i].second;
}
cout<<sum<<endl;
for(int i=0;i<n;i++){
    
    cout<<mp[p[i].first]<<" "<<mp[p[2*n-1-i].first]<<endl;
    
}
//bekar hai bhaiya me to tutgaya

}

}