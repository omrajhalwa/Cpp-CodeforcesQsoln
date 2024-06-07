
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353

//32 bit

signed main(){ 
ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int t;cin>>t;

while(t--){
int q,k;cin>>q>>k;int p=1,i=2;

while((q*i)%mod<=k){

i=i*2;
i%=mod;
    p++;
}

int ans=0;



    int start=q,end=k;
while(start<=end){
    int mid=start+(end-start)/2;

int num=(1<<(p-1))*mid;
num=num%mod;
if(num<=k){
  start=mid+1;
}else{
    end=mid-1;
}


}
ans+=end-q+1;
ans=ans%mod;
start=q;
while(start<=end){
    int mid=start+(end-start)/2;

int con=(1<<(p-2))*3;
con=con%mod;
if(mid<=k/con){
  start=mid+1;
}else{
   
    end=mid-1;
}


}

ans=(ans+(end-q+1)*(p-1));
ans=ans%mod;

cout<<p<<" "<<ans<<endl;

}
}