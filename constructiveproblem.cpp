#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
set<int>c;
map<int,int>mp;
for(int &x:v){cin>>x;c.insert(x);mp[x]++;}

int a=0,mex=c.size();
for(auto it:c){
if(a==it){
    a++;
}else{
    mex=a;
    break;
}
}
bool give=false;
if(mp[mex+1]==0){
for(auto it:mp){
    if(it.first<mex+1&&it.second>1){
        give=true;
    }if(it.first>mex+1){
        give=true;
    }
}
}else{
int a=-1,b=-1;
for(int i=0;i<v.size();i++){
    if(v[i]==mex+1){
        a=i;break;
    }
}for(int i=n-1;i>=0;i--){
    if(v[i]==mex+1){
        b=i;break;
    }
}
give=true;
set<int>s;
for(int i=0;i<a;i++){
    s.insert(v[i]);
}for(int i=b+1;i<v.size();i++){
    s.insert(v[i]);
}
for(int i=a;i<=b;i++){
    if(v[i]<mex+1&&s.find(v[i])==s.end()){//condition====.......
        give=false;break;
    }
}


}


if(give){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
}
}