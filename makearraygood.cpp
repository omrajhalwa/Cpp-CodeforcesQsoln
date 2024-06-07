#include<bits/stdc++.h>
using namespace std;
#define int long long



bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
signed main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
cin>>v[i].first;
v[i].second=i+1;
}

sort(v.begin(),v.end());
vector<pair<int,int>>p;
for(int i=1;i<n;i++){
    int k=0;
    if(v[i].first%v[i-1].first!=0){
    k=((v[i].first/v[i-1].first+1)*v[i-1].first)-v[i].first;
    v[i].first=((v[i].first/v[i-1].first+1)*v[i-1].first);}
p.push_back(make_pair(v[i].second,k));
}

cout<<p.size()<<endl;
sort(p.begin(),p.end());
for(auto it:p){
    cout<<it.first<<" "<<it.second<<endl;
}
}

}