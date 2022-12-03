
#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
int n,nine=0,k=0;
cin>>n;
string s;
cin>>s;
 
if(s[0]=='9'&&s[n-1]!='0'){
    for(int i=0;i<n-1;i++){
        cout<< 58-s[i];
    }cout<<59-s[n-1]<<endl;
    
}else if(s[0]=='9'&&s[n-1]=='0'){
    for(int i=n-1;i>;i++){
        cout<< 59-s[i];
    }cout<<58-s[n-1]<<endl;
    
}else {
 
for(int i=0;i<n;i++){
    cout<<'9'-s[i];
}cout<<endl;
 
 
}
 
 
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
}