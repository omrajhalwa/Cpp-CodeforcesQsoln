#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string,string> a,pair<string,string> b){

if(a.first<b.first){
    return false;
    }return true;
}



signed main(){


int n,m;cin>>n>>m;
vector<string>v;
map<string,int>mp;
for(int i=0;i<n;i++){
    string s="";
    cin>>s;
    mp[s]=i+1;
    v.push_back(s);
}
vector<pair<string,string>>v1;

for(int i=0;i<n;i++){
    string k="";
    for(int j=0;j<m;j++){
        if(j%2==0){
       k.push_back(90-(v[i][j]-65));}else{
        k.push_back(v[i][j]);
       }
    }
    v1.push_back(make_pair(k,v[i]));
}
sort(v1.begin(),v1.end(),cmp);
for(auto it:v1){
    cout<<mp[it.second]<<" ";
}


}