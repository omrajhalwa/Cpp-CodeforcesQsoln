#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);


int t;cin>>t;
while(t--){
string s="";
cin>>s;
int a=0,b=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='3'){
        a=3;break;
    }if(s[i]=='7'){
        a=7;break;
    }

    
    
}

if(a==3){b=7;}else{b=3;}
cout<<a<<b<<endl;
}
}