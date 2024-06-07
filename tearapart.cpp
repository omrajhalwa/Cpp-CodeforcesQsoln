#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
string s="";
cin>>s;
map<char,int>mp;
for(int i=0;i<s.size();i++){
    mp[s[i]]++;
}
int ans=INT_MAX;
for(char i='a';i<='z';i++){

if(mp[i]!=0){


vector<int>v;
int p=-1;
for(int j=0;j<s.size();j++){
    if(s[j]==i){
       
    v.push_back(j-p-1);
    p=j;
    }
}
v.push_back(s.size()-(p+1));
int mx=0;
for(int j=0;j<v.size();j++){
int k=0;
 
while(v[j]>0){
    k++;
   v[j]=v[j]/2;
}

mx=max(k,mx);


}


ans=min(ans,mx);
}


}

cout<<ans<<endl;
}
}