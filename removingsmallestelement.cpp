#include<bits/stdc++.h>
using namespace std;
#define int long long

//not done by me
signed main(){ 

ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
vector<int>v;map<int,int>mp;
for(int i=0;i<n;i++){
     if(s[i]=='0'){
    v.push_back(i+1);
    mp[i+1]=2;
    }
}
int ans=0;
for(int i=0;i<v.size();i++){
int k=v[i];
int p=k;int l=0;

if(mp[k]==2){
    l++;
    mp[k]=1;
}


for(int j=i+1;j<v.size();j++){

if(v[j]==p+k){

if(mp[v[j]]==2){
    mp[v[j]]=1;
    l++;
}
    p=p+k;
}


}
ans+=k*l;
}

cout<<ans<<endl;










}

}