#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}
map<int,int>mp;
for(int i=0;i<n;i++){
int a=v[i];
while(a!=0){
    if(a<=n){
    mp[a]++;}
    a=a/2;
}
}
vector<pair<int,int>>c;
for(auto it:mp){
    int a,b;a=it.second; b=it.first;
    c.push_back(make_pair(a,b));
}
sort(c.begin(),c.end());
vector<int>k;
for(int i=0;i<c.size();i++){

for(int j=0;j<n;j++){

int a=v[j];
while(a!=0){
    if(a<=n){
    if(a==c[i].second){
    k.push_back(a);
    //cout<<a<<endl;
    v[j]=0;j=n;
    }
    }
    a=a/2;
}

}
}
if(k.size()==n){
    cout<<"YES"<<endl;
}else{cout<<"NO"<<endl;}
}


}