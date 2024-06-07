#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;cin>>t;
while(t--){
    
int n;cin>>n;
vector<int>v(n);map<int,int>mp;
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
}

vector<pair<int,int>>p;

for(auto it:mp){
    p.push_back(make_pair(it.first,it.second));
}

int sum=p[0].second;
for(int i=1;i<p.size();i++){

if(p[i].first==p[i-1].first+1){

    if(p[i].second>p[i-1].second){
    sum+=abs(p[i].second-p[i-1].second);
    }
}else{
    sum+=p[i].second;
    
}

}
cout<<sum<<endl;



}
}