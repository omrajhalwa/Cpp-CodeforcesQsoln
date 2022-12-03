#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin>>t;
while(t--){
 
long long int a,b,k;
cin>>a>>b;
k=b;
if(a<=b){
     if(b%a==0){
     cout<<b/a<<endl;}
     else{
     cout<<b/a+1<<endl;}
        
}else{
    if(b<a){
        if(a%b!=0){
            b=(a/b+1)*b;
        }else{
             b=(a/b)*b;
        }
    }
    if(b%a==0){
     cout<<b/a<<endl;}
     else{
     cout<<b/a+1<<endl;}
        
     }
}
 
 
 
 
 
 
}

