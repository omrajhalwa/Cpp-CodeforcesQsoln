#include<bits/stdc++.h>
using namespace std;

int main(){

int t;cin>>t;
while(t--){
int n;cin>>n;
string s;cin>>s;bool give=true;


int b=0,r=0;
s.push_back('W');
for(int i=0;i<n+1;i++){
    if(s[i]=='B'){
        b++;
    }else if(s[i]=='R'){
        r++;
    }else{
     if((b==0&&r==0)||(b>0&&r>0)){

     }else{give=false;}
     b=0;r=0;
    }
}
//QUESTION NOT READ PROPERLY

if(give){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
}



}
