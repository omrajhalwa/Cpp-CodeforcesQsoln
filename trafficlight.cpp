#include<bits/stdc++.h>
using namespace std;

int main(){long long int t;
    cin>>t;
    while(t--){
string s;
 int u=0;
char q; int qw;
cin>>qw>>q;
cin>>s;
s+=s;
vector<int>v;
 
if(q=='g')
{
    cout<<0<<endl;
}else{
for(int i=0;i<s.size();i++){
    if(s[i]=='g'){
    v.push_back(i);
    }
    
  }  

    for( int i=0;i<s.size()/2;i++){
if(s[i]==q){
     int it=upper_bound(v.begin(),v.end(),i)-v.begin();
     
    u=max(u,v[it]-i);
}


    }





cout<<u<<endl;
    }
    }
}