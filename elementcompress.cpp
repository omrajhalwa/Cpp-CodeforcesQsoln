#include<bits/stdc++.h>
using namespace std;
//#define int long long

signed main(){

ios::sync_with_stdio(false);
cin.tie(0);

int t;cin>>t;
while(t--){

int n;
cin>>n;
vector<pair<int,int>>v;
vector<int>c;
multiset<int>mul;
for(int i=1;i<=n;i++){
    mul.insert(i);
    mul.insert(i);
}
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    c.push_back(x);
    v.push_back({x,i});
   auto itt= mul.find(x);
 /*-----ye hai fasad ki jad bro>>>>>>..*/  if(itt!=mul.end()){
    mul.erase(itt);
   }
}
sort(v.begin(),v.end());

vector<int>p(n);
vector<int>q(n);
std::multiset<int>::iterator it=mul.begin();
for(int i=0;i<n&&it!=mul.end();i++){
    if(i%2==0){
       
    
    p[v[i].second]=v[i].first;
    q[v[i].second]=*it;
    auto itt=(it++);
    mul.erase(itt);
    }else{
    
    q[v[i].second]=v[i].first;
    p[v[i].second]=*it;
    auto itt=(it++);
     mul.erase(itt);

    }
}
vector<int>check(n);
set<int>s1;
set<int>s2;
for(int i=0;i<n;i++){
check[i]=max(p[i],q[i]);
s1.insert(p[i]);
s2.insert(q[i]);
}

if(c==check&&s1.size()==s2.size()&&s1.size()==n){
    cout<<"YES"<<endl;
for(auto it:p){
    cout<<it<<" ";
}cout<<endl;
for(auto it:q){
    cout<<it<<" ";
}
}else{
    cout<<"NO";
}
cout<<endl;

}
}