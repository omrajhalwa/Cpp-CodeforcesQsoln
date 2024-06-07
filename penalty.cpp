#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;cin>>t;
while(t--){
string s="";
cin>>s;

int o=0,e=0,b=5;int an=10,as=10;
for(int i=0;i<s.size();i++){



if(i%2!=0&&(s[i]=='1'||s[i]=='?')){
    o++;
}else if(i%2==0&&s[i]=='1'){
    e++;
}
if(i%2==0){b--;}
if(o>e+b){
    an=i+1;
    break;
}
}
 o=0,e=0,b=5;
for(int i=0;i<s.size();i++){
if(i%2==0&&(s[i]=='1'||s[i]=='?')){
    e++;
}else if(i%2!=0&&s[i]=='1'){
    o++;
}
if(i%2!=0){b--;}
if(e>o+b){
    as=i+1;
    break;
}


}


cout<<min(an,as)<<endl;
}
}