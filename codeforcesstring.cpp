#include<bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;
while(t--){

string s="";cin>>s;
bool give=false;
for(int i=0;i<s.size();i++){
    if(s[i]=='c'||s[i]=='o'||s[i]=='d'||s[i]=='e'||s[i]=='f'||s[i]=='o'||s[i]=='r'||s[i]=='c'||s[i]=='e'||s[i]=='s'){
        give=true;
    }
}
if(give){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}

}


}