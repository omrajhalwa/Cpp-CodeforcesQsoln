#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t ;cin>>t;
while(t--){

int n,k;
cin>>n>>k;
string s;
cin>>s;bool give=true;
for(int i=0;i<n;i++){
    if((s[i]-'0')<k&&give){
     cout<<k<<s[i];
     give=false;
    }else{
        cout<<s[i];
    }
}
if(give){
    cout<<k;
}
cout<<endl;

}



}