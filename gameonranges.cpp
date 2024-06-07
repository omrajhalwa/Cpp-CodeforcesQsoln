#include<bits/stdc++.h>
using namespace std;

#define mk make_pair


int main(){
int t;cin>>t;
while(t--){

int n;cin>>n;
vector<pair<int,int>>v;
vector<pair<pair<int,int>,int>>c;map<int,int>mp;
for(int i=0;i<n;i++){
    int a,b;cin>>a>>b;
    mp[i+1]=1;
    v.push_back(make_pair(a,b));
   c.push_back(mk(mk(a,b),0));
}
vector<pair<int,int>>b;
for(int i=0;i<n;i++){
    if(v[i].first==v[i].second){
        c[i].second=v[i].second;
        mp.erase(v[i].second);
    }else{
        b.push_back(make_pair(v[i].first,v[i].second));
    }
}
sort(b.begin(),b.end());
for(int i=0;i<b.size();i++){
    for(int j=b[i].first;j<=b[i].second;j++){
       if(mp[j]>0){
        mp[j]++;
       }else{
        mp.erase(j);
       }
    }
}
vector<pair<int,int>>v1;
for(auto it:mp){
    v1.push_back(mk(it.second,it.first));
}sort(v1.begin(),v1.end());
sort(c.begin(),c.end());
for(int i=0;i<v1.size();i++){

for(int j=0;j<c.size();j++){
    if(c[j].second==0&&c[j].first.first<=v1[i].second&&v1[i].second<=c[j].first.second){
        c[j].second=v1[i].second;
    }
}


}

for(auto it:c){

cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;




}
}


}