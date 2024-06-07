#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int n,k,x;
cin>>n>>k>>x;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());

vector<int>c;
for(int i=0;i<n-1;i++){
    if(v[i+1]-v[i]>x){
        c.push_back(v[i+1]-v[i]);
    }
}int ans=1;

if(c.size()>0){
    ans+=c.size();
    sort(c.begin(),c.end());
    for(int i=0;i<c.size();i++){
    
if(k>0&&ans>1){
int p;
if(c[i]%x==0){p=c[i]/x;}
else{p=c[i]/x+1;}
if(p-1<=k){
    k-=p-1;
    ans--;
}

}
        }
    
}



cout<<ans<<endl;

}