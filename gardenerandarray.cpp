#include<bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;
while(t--){
int n;
cin>>n;
bool give=false;
map<int,int>mp;
vector<vector<int>>v(n);
int i=0;
while(i<n){

int k;
cin>>k;
while(k--){
int x;
cin>>x;
mp[x]++;
v[i].push_back(x);
}
if(i==n-1){
int p=0;
for(int j=0;j<v[i].size();j++){
    if(mp[v[i][j]]>1){p++;}
}
if(p==v[i].size()){give=true;}
}
i++;
}
map<int,int>m;
 i=n-1;
while(i>=0){

for(int j=0;j<v[i].size();j++){
    m[v[i][j]]++;
}
if(i==0){int op=0;
for(int j=0;j<v[i].size();j++){
if(m[v[i][j]]>1){op++;}
}if(op==v[i].size()){give=true;}
}
i--;
}





if(give){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
}







}