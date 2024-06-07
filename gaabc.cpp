#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
string s="";
cin>>s;

vector<int>v;
int cntb=0;
int a=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='A'){
        a++;
    }
    if(s[i]=='B'){cntb++;
    v.push_back(a);
    a=0;
    }
}

if(cntb>0){
    v.push_back(a);
}

int ans=0;
if(cntb>0){
sort(v.begin(),v.end());
int j=0;

for(int i=v.size()-1;i>=0;i--){
if(j<cntb){
    j++;
    ans+=v[i];
}
}
}
cout<<ans<<endl;
}
}