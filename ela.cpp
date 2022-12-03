#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){

int n,k;
cin>>n>>k;
string s;
cin>>s;
string ans="";
map<char,int>mp;
for(auto c:s){
    mp[c]++;
}
vector<int>v(27);
for(auto it:mp){
    v[it.first-'a']=it.second;
}
int f=k;
while(f--){
bool res=true;
int i=0,j=0;
while(i<n/k){

if(v[i]==0){
    res=false;
    break;
}
v[i]--;
i++;
j++;
}
if(res){
    ans+='a'+n/k;
}else{
    ans+='a'+j;
}



}












cout<<ans<<endl;




}










}