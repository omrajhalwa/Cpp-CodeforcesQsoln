#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;
string s="";
cin>>s;

if(s.size()>1){int p=-1,k=-1;
char c=s[0];
    for(int i=n-1;i>0;i--){
     if(c>s[i]){
        c=s[i];
        p=i;
        
     }
    }for(int i=n-1;i>0;i--){
     if(s[0]==s[i]){
        k=i;
        break;
     }
    }

if(p!=-1){
cout<<s[p];
for(int i=0;i<n;i++){
    if(i!=p){
    cout<<s[i];
    }
}
cout<<endl;
}else if(k!=-1){
    cout<<s[k];
for(int i=0;i<n;i++){
    if(i!=k){
    cout<<s[i];
    }
}
cout<<endl;
    
    
}else{
    cout<<s<<endl;
}
}else{
    cout<<s<<endl;
}


}
}