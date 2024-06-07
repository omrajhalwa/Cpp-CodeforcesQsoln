#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){

int n;cin>>n;
string s;
cin>>s;
int zero=-1,one=-1;
for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
        zero=i;
        cout<<one+2<<" ";
    }else{
        one=i;
     cout<<zero+2<<" ";
    }
}
cout<<endl;

}

}