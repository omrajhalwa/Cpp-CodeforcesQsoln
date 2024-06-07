#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n;cin>>n;
int i=0,j=0;
string s="";
cin>>s;bool give =false;
for(int k=0;k<s.size();k++){
    if(s[k]=='U'){i++;}
    else if(s[k]=='R'){j++;}
    else if(s[k]=='D'){i--;}
    else{j--;}


    if(i==1&&j==1){
        give=true;break;
    }
}

if(give){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}


}
}