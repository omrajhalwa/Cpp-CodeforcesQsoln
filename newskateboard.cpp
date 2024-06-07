#include<bits/stdc++.h>
using namespace std;

#define int long long 
signed main(){

string s="";cin>>s;
int ans=0;
for(int i=s.size()-1;i>=0;i--){
if((s[i]-'0')%4==0){ans++;}
if(i-1>=0){
    int a=0;
    a=s[i-1]-'0';a=a*10;
    a+=s[i]-'0';
    if(a%4==0)ans+=i;
}
}


cout<<ans<<endl;

}