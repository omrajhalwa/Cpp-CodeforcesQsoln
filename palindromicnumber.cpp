
#include<bits/stdc++.h>
using namespace std;
 #define pb push_back

 //dada pawansut hanuman ji ki jay
int main(){
int t;
cin>>t;
while(t--){
int n,nine=0,k=0;
cin>>n;
string s="";
cin>>s;
vector<int>s1;
 s.push_back('0');
if(s[0]=='9'){
    bool cry=false;
for(int i=s.size()-2;i>=0;i--){
    if((s[i+1]=='0')||!cry){
     if(s[i]-'1'>0){
        s1.pb('9'+2-s[i]);
         cry=true;
     }else{
        s1.pb('1'-s[i]);
        cry=false;
     }

    }else{
      
      if(s[i]=='0'){
        s1.pb(0);
        cry=false;
      }else{
       cry=true;
        s1.pb('9'+1-s[i]);}
    }


}
reverse(s1.begin(),s1.end());

for(int i=0;i<s1.size();i++){
    cout<<s1[i];
}cout<<endl;


}else{
    for(int i=0;i<n;i++){
        cout<<'9'-s[i];
    }cout<<endl;
}
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
}