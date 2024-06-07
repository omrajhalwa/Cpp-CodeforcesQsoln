#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
string s;
cin>>s;
map<int,int>mp;
for(int i=0;i<s.size();i++){
    mp[s[i]]++;
}
int n=mp.size();
//%me kyo padta hai baba
bool give=true;
map<int,int>mpp,s1;
for(int i=0;i<s.size();i++){
    if(s1[s[i]]==0){
mpp[s[i]]=i;
s1[s[i]]++;}//ok
else{
    if(mpp[s[i]]==i-n){
     mpp[s[i]]=i;
    }else{give=false;break;}
}
}
if(give){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
}
}