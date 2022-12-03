#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int m;
cin>>m;
string s;
string b;
cin>>s>>b;
bool give=true;
for(int i=0;i<s.size();i++){
    if(s[i]=='R'){
        if(b[i]=='R'){

        }else{
            give=false;
        }
    }if(b[i]=='R'){
        if(s[i]=='R'){

        }else{
            give=false;
        }
    }
}

if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


}









}