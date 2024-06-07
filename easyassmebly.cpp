#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){


int n;
cin>>n;
vector<int>v;
vector<vector<int>>p;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    vector<int>k;
    for(int j=0;j<a;j++){
        int b;
        cin>>b;
        v.push_back(b);
        k.push_back(b);
    }
    p.push_back(k);
}
sort(v.begin(),v.end());


map<int,int>mp;
for(int i=0;i<v.size();i++){
    mp[v[i]]=-1;
   if(i<v.size()-1) mp[v[i]]=v[i+1];
}
int split=0,comb=0;

for(int i=0;i<n;i++){
    for(int j=0;j<p[i].size();j++){
        if(j+1<p[i].size()&&mp[p[i][j]]!=p[i][j+1]){
          split++;
        }
        //cout<<p[i][j]<<" "<<comb<<endl;
    }
}


cout<<split<<" "<<split+n-1<<endl;
}