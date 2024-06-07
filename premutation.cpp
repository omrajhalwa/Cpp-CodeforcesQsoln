#include<bits/stdc++.h>
using namespace std;

int main(){

int t;cin>>t;
while(t--){
int n;
cin>>n;

map<int,int>mp;map<int,int>m;
for(int i=0;i<n;i++){
vector<int>c(n);

for(int j=0;j<n-1;j++){

cin>>c[j];

int p=mp[c[j]];
mp[c[j]]=max(p,j);
if(j==n-2)
m[c[j]]++;
}


}
vector<int>v(n);
int k;
for(auto it:m){if(it.second==n-1){k=it.first;break;}}

v[n-1]=k;
for(auto it:mp){
    if(it.first!=k){
    v[it.second]=it.first;}
}


for(auto it:v){
    cout<<it<<" ";
}
cout<<endl;}

}