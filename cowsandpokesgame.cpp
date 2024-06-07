#include<bits/stdc++.h>
using namespace std;

int main(){


int n;
cin>>n;
string s;
cin>>s;
int ii=0,a=0,f=0;
for(int i=0;i<n;i++){
    if(s[i]=='I'){
        ii++;
    }else if(s[i]=='A'){
        a++;
    }
}

if(ii==1){
    cout<<ii;
}else if(ii==0){
    cout<<a;
}else{
    cout<<0;
}


}