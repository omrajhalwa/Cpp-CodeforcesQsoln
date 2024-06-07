#include<bits/stdc++.h>
using namespace std;
#define  long long;
 
 
 
signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
string s;
string b;
cin>>s>>b;
vector<int>v;
for(int i=0;i<s.size();i++)
{
  if(s[i]==b[i]){
   v.push_back(0);
  }else{
    v.push_back(1);
  }
}
bool give=true;
for(int i=0;i<v.size()-1;i++){
    if(v[i]==v[i+1]){
        give=true;
    }else{
        give=false;
        break;
    }
}
bool j=false;
if(s[0]=='0'){
        
        for(int i=0;i<s.size()-1;i++){
     if(s[i]=='0'&&s[i]==s[i+1]&&b[i]=='0'&&b[i+1]==b[i]){
       j=true;
     }else{
        j=false;
        break;
     }
    }
    
    }
 
if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
if(j==true&&give){
    cout<<"0"<<endl;
    
}
bool flag=false;
if(give&&j==false){
    int l=1,r=1;
    if(s[0]=='1'){
    for(int i=0;i<s.size()-1;i++){
     if(s[i]=='1'&&s[i]==s[i+1]&&s[i]==b[i]){
      flag=true;
     }else{
        flag=false;
        break;
     }
    }
    if(flag){
        cout<<2<<endl;
        cout<<l<<" "<<r<<endl;
        cout<<l+1<<" "<<s.size()<<endl;
    }
    
    
    
}
 
}
 
 
 
 
 
 
if(give&&s[0]!=b[0]&&j==false){
int l=1,r=1;
for(int i=0;i<s.size();i++){
    if(b[i]=='0'){
        r=i+1;
    }
}
 
vector<int>x;
int k=0;
for(int i=0;i<s.size();i++){
 
if(k%2==0&&s[i]=='1'){
    x.push_back(i);
    k++;
}else if(k%2!=0&&s[i]=='0'){
    x.push_back(i);
    k++;
}
 
}
int i=0;
int count=0;
for( i;i<x.size()&&x[i]+1<=r;i++){
    count++;
}if(count!=0){
cout<<count<<endl;
}else{
    cout<<3<<endl;
cout<<1<<" "<<s.size()<<endl;
cout<<1<<" "<<1<<endl;
cout<<2<<" "<<s.size()<<endl;
}
 i=0;
for( i;i<x.size()&&x[i]+1<=r;i++){
    cout<<x[i]+1<<" "<<r<<endl;
}
 
}else if(give&&s[0]==b[0]&&flag==false&&j==false){
int l=1,r=1;
 
 
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        s[i]='0';
    }else{
        s[i]='1';
    }
}
for(int i=0;i<s.size();i++){
    if(b[i]=='0'){
        r=i+1;
    }
}
int m;
 
 
vector<int>x;
int k=0;
for(int i=0;i<s.size();i++){
 
if(k%2==0&&s[i]=='1'){
    x.push_back(i);
    k++;
}else if(k%2!=0&&s[i]=='0'){
    x.push_back(i);
    k++;
}
 
}
int i=0;
int count=0;
for( i;i<x.size()&&x[i]+1<=r;i++){
    count++;
}
cout<<count+1<<endl;
cout<<l<<" "<<s.size()<<endl;
 i=0;
for( i;i<x.size()&&x[i]+1<=r;i++){
    cout<<x[i]+1<<" "<<r<<endl;
}
 
 
 
 
 
 
}
 
 
 
 
 
}
}