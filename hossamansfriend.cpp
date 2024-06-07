#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){
int n,x,min=0;
cin>>n>>x;
set<pair<int,int>>v;
vector<pair<int,int>>v1;
int sum=0;
for(int i=1;i<=n;i++){
    sum+=i;
}
if(x>0){
for(int i=0;i<x;i++){
    int a,b;
    cin>>a>>b;
    if(a<b){
    v.insert(make_pair(a,b));}
    else{
        v.insert(make_pair(b,a));
    }
}int sum=0;
for(int i=1;i<=n;i++){
    sum+=i;
}
for(auto it:v){
    v1.push_back(make_pair(it.first,it.second));
        
}


int p=n+1;
for(int i=v1.size()-1;i>=0;i--){
    
int mul=0;

mul=v1[i].first*(p-v1[i].second);
if(mul>0){
    min=min+mul;
}
if(p>v1[i].second){
p=v1[i].second;}


}
}
cout<<sum-min<<endl;
}




}