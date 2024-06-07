#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);
int t;cin>>t;
while(t--){
int n,a,q;
cin>>n>>a>>q;
string s="";int o=a;
cin>>s;int plus=0,min=0;bool give=false;
for(int i=0;i<q;i++){
    if(a>=n){give=true;}
    if(s[i]=='+'){
        plus++;
        a++;
    }else{
        min++;
        a--;
    }
    
}
if(a>=n){give=true;}

a=o;
if(give){
    cout<<"YES"<<endl;
}else if(a+plus>=n){
    cout<<"MAYBE"<<endl;
}else{
    cout<<"NO"<<endl;
}

}
}