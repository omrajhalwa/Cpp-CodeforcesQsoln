#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){


int n;cin>>n;set<pair<int,int>, greater<pair<int,int>> > s;int t=1000000;
vector<int>ans;set<pair<int,int>>s1;int p=1;
for(int i=1;i<=n;i++){

int a=0,b=0;
cin>>a;
if(a==1){cin>>b;s.insert({b,t-p});
s1.insert({p,b});
p++;
}else if(a==2){
    int a1=0;
    auto it=s1.begin();
    ans.push_back(it->first);
    
    auto itt=s.find({it->second,t-it->first});
   if(it!=s1.end()) s1.erase(it);
   if(itt!=s.end())s.erase(itt);
}else{
    
    auto it=s.begin();
    ans.push_back((it->second-t)*-1);
   
    auto itt=s1.find({(it->second-t)*-1,it->first});
   if(itt!=s1.end()) s1.erase(itt);
   if(it!=s.end())s.erase(it);
}



}
for(auto it:ans){
    cout<<it<<" ";
}

}