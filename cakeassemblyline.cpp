#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,w,h;//ye binary search hai ya greedy
cin>>n>>w>>h;
vector<pair<int,int>>v;
vector<pair<int,int>>c;
for(int i=0;i<n;i++){
    int x;cin>>x;
v.push_back({x-w,x+w});
}for(int i=0;i<n;i++){
    int x;cin>>x;
c.push_back({x-h,x+h});
}

int x=0,y=0;
for(int i=0;i<n;i++){
if(c[i].first<v[i].first){
    x=max(x,(v[i].first-c[i].first));
}if(c[i].second>v[i].second){
    y=max(y,c[i].second-v[i].second);
}
}
for(int i=0;i<n;i++){
    c[i].first+=x;
    c[i].second-=y;
     c[i].first-=y;
    c[i].second+=x;
}
bool give=true;
for(int i=0;i<n;i++){
    if(v[i].first<=c[i].first&&c[i].second<=v[i].second){

    }else{
        give=false;
        break;
    }
}

if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}