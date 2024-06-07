#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
vector<pair<int,int>>v(n+1);
vector<pair<int,int>>c;
for(int i=0;i<n;i++){
    cin>>v[i].first;
    v[i].second=s[i]-'0';

}v[n].first=0,v[n].second=0;
s.push_back(0);
for(int i=0;i<=n;i++){
if(s[i]=='0'&&s[i+1]!='1'){
    
}else{
    c.push_back(make_pair(v[i].first,v[i].second));
}
}

int one=INT64_MAX,mn=INT64_MAX,ans=0;bool give=false;

for(int i=0;i<c.size()-1;i++){
    if(c[i].second==0&&c[i+1].second==1){give=true;}
    
    if((c[i].second==0&&c[i+1].second==1)||c[i].second==1){
        ans+=c[i].first;
       if(give)
        mn=min(mn,c[i].first);
    }
    if(c[i+1].second==0){
        if(mn!=one&&give){
        ans-=mn;mn=one;
        give=false;}
    }
    
}

cout<<ans<<endl;
}
}
