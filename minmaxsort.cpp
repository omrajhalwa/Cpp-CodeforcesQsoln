#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    ios::sync_with_stdio(false);
cin.tie(0);
int t;cin>>t;
while(t--){

int n;cin>>n;
vector<int>v(n);
map<int,int>mp;
for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]=i+1;
}
int ans=0;
int p,k;

if(n%2==0){
p=n/2;k=n/2+1;
}else{
    p=n/2+1,k=n/2+1;
}
    
    if(n>1){int rot;
        if(n%2==0){rot=n/2;}else{rot=n/2+1;}
        
for(int i=0;i<rot;i++){int r,s;
    r=p-i;s=k+i;

if(r+1!=s&&mp[r]<mp[r+1]&&mp[s-1]<mp[s]&&mp[r]<mp[s]){

}else if(r+1==s&&mp[r]<mp[s]){
    
}else if(r==s){
}else{
    if(n%2==0){ans=n/2-i;}
    else{
        
        ans=n/2+1-i;
    }
    break;
}
}//sorry debuging issue
    }


cout<<ans<<endl;


}
}