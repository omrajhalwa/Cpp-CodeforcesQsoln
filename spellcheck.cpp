#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s="";
cin>>s;
int t=0,p=0,m=0,u=0,r=0;
 
for(int i=0;i<n;i++){
  if(s[i]=='T'){
    t++;
  }else if(s[i]=='i'){
    p++;
  }else if(s[i]=='m'){
    m++;
  }else if(s[i]=='u'){
    u++;
  }else if(s[i]=='r'){
    r++;
  }
 
}
 
 
if(t==1&&m==1&&u==1&&p==1&&r==1&&n==5){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
 
 
 
}
 
 
 
 
 
 
}





}