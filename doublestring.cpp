#include<bits/stdc++.h>
using namespace std;

int main(){

int t;cin>>t;
while(t--){



int n;
cin>>n;map<string,pair<int,int>>mp;map<string,int>m;vector<string>v;
for(int i=0;i<n;i++){
string s="";
cin>>s;
v.push_back(s);
mp[s].first=2;
m[s]=1;
mp[s].second=i;

}

for(auto it:mp){


bool give=false;//ok bro

for(int l=1;l<=it.first.size()-1;l++){
string s="";
string k="";
    for(int i=0;i<l;i++){
     
        s.push_back(it.first[i]);
    }for(int i=l;i<it.first.size();i++){
        k.push_back(it.first[i]);
    
    }


if(mp[s].first==2&&mp[k].first==2){
  // cout<<s<<" "<<k<<endl;
    give=true;break;
}



}

if(give){
    
    m[it.first]=2;
}








}



for(int i=0;i<v.size();i++){
  if(m[v[i]]==2){
    cout<<1;
  }else{
    cout<<0;
  }
}cout<<endl;
}
}