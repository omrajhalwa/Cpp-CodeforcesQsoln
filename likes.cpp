#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v;vector<int>neg;int p=1,k=-1;
for(int i=0;i<n;i++){int x;cin>>x;
 if(x>0){
v.push_back(p);p++;
 }else{
    neg.push_back(k);k--;
 }
}
sort(v.begin(),v.end());
sort(neg.begin(),neg.end());
vector<int>maax;
int mx=0;vector<int>miin;
if(v.size()>0){
for(int i=0;i<v.size();i++){
    
   maax.push_back(v[i]);
       mx=max(mx,v[i]);
}}

if(neg.size()>0){for(int i=neg.size()-1;i>=0;i--){
        maax.push_back(mx+neg[i]);
}

}
int i=v.size(),j=neg.size();



int cnt=1;
while(i>0||j>0){
if(i>0&&j>0){
    miin.push_back(1);

    miin.push_back(0);
    i--;j--;
}else if(i>0){
    miin.push_back(cnt);
    i--;cnt++;
}



}
for(auto it:maax){
    cout<<it<<" ";
}
cout<<endl;
for(auto it:miin){
    cout<<it<<" ";
}
cout<<endl;

}
}