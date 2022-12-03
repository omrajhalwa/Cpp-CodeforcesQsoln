#include<bits/stdc++.h>
using namespace std;
#define  long long;



signed main(){

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

if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
int l=1,r=1;
for(int i=0;i<s.size();i++){
    if(b[i]=='0'){
        r=i+1;
    }
}

for(int i=s.size()-1;i>=0;i--)
{
   if(s[i]=='1'){
    l=i;
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
}else{
    
}

}
int i=0;
int count=0;
for( i;i<x.size()&&x[i]+1<=r;i++){
    count++;
}
cout<<count<<endl;
 i=0;
for( i;i<x.size()&&x[i]+1<=r;i++){
    cout<<x[i]+1<<" "<<r<<endl;
}


}