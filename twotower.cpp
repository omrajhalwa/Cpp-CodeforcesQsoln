#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while(t--){

int n,k;
cin>>n>>k;
string s="";
string k1="";
cin>>s>>k1;
for(int i=k1.size()-1;i>=0;i--){
    s.push_back(k1[i]);
}


int b=0;
for(int i=0;i<s.size()-1;i++)
{
    if(s[i]==s[i+1]){
        b++;
        
    }
}



if(b<2){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}

}