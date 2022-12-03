#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="";
    string b="";
cin>>s;
cin>>b;
map<char,int>mp;
map<char,int>m;
for(int i=0;i<s.size();i++){
    mp[s[i]]++;
}
for(int i=0;i<b.size();i++){
    m[b[i]]++;
}
bool give=true;
int k=0;
for(int i=97;i<=122;i++){
    if(m[i]==mp[i]){
        
    }else if(m[i]<mp[i]&&k<1){
        k++;
        }else{
        give=false;
        break;
    }
}


if(give&&s.size()==b.size()){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}



}