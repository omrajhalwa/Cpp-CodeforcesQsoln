#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){

string s;
cin>>s;
char po;cin>>po;

if(s.size()==1&&s[0]==po){
cout<<"YES"<<endl;    
}else if(s.size()>1){

bool give=false;
for(int i=0;i<s.size();i++){

if(s[i]==po&&(i!=1&&i!=s.size()-2)){
    give=true;
}


}

if(!give){cout<<"NO"<<endl;}else{
    cout<<"YES"<<endl;
}




}else{
    cout<<"NO"<<endl;
}





}


}