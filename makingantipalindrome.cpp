#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;
string s="";
cin>>s;
map<char,int>mp;int mx=0;
for(int i=0;i<s.size();i++){
    mp[s[i]]++;
    mx=max(mx,mp[s[i]]);
}
if(n%2!=0||mp.size()==1){
    cout<<-1<<endl;
}else{
int ans=INT_MIN;
map<char,int>m;int sum=0;
for(int i=0;i<n/2;i++){
    if(s[i]==s[n-i-1]){
        sum++;
        m[s[i]]++;
        ans=max(ans,m[s[i]]);
    }
}

if(mx>n/2){
    cout<<-1<<endl;
}else if(m.size()==0){
    cout<<0<<endl;
}
else{
  cout<<max(ans,(sum+1)/2)<<endl;  
}
}
}
}