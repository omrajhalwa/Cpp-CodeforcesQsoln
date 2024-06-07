#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
int t;cin>>t;
while(t--){

int n,m;cin>>n>>m;
int left=0,right=0,mid=0;
vector<int>pre1(m+2,0);
vector<int>pre2(m+2,0);
vector<int>v(m+2,0);
int ans=0;
for(int i=0;i<n;i++){
int x;cin>>x;
if(x>0){pre1[x]=1;pre2[x]=1;if(v[x]==0){mid++;}
v[x]=1;}
else if(x==-1){left++;}
else{right++;}
}
int mx=0;
if(mid+left>m){
    mx=m;
}else{
    mx=mid+left;
}
ans=max(ans,mx);
mx=0;
if(mid+right>m){
    mx=m;
}else{
    mx=mid+right;
}
ans=max(ans,mx);

for(int i=1;i<=m;i++){
    pre1[i]=pre1[i]+pre1[i-1];
}for(int i=m;i>=0;i--){
    pre2[i]=pre2[i]+pre2[i+1];
}

for(int i=1;i<=m;i++){

    if(v[i]==1){
      int a=1;
    if(pre2[i]-1+right>m-i){
        a+=m-i;
    }else{
        a+=pre2[i]-1+right;
    }
    if(pre1[i]-1+left>i-1){
        a+=i-1;
    }else{
        a+=pre1[i]-1+left;
    }


    ans=max(ans,a);

    }
}

cout<<ans<<endl;



}








}