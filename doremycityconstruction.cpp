#include<bits/stdc++.h>
using namespace std;
#define int long long



signed main(){

     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
for(int &x:v){cin>>x;}
sort(v.begin(),v.end());

auto bin=[&](int start,int end,int val){
int ans=-1;
while(start<=end){
int mid=start+(end-start)/2;

if(v[mid]>val){
    ans=mid;
    end=mid-1;
}else{
    start=mid+1;
}
}

return ans;

  
};

auto bin2=[&](int start,int end,int val){
int ans=-1;
while(start<=end){
int mid=start+(end-start)/2;

if(v[mid]<val){
    ans=mid;
    start=mid+1;
}else{
    end=mid-1;
}
}

return ans;

  
};


int ans=0,mx=0;
for(int i=0;i<n;i++){

int index=bin(i+1,n-1,v[i]);

if(index!=-1){
    ans+=n-index;
}
int index2=bin2(0,i-1,v[i]);
if(index2!=-1){
    ans-=index2+1;
}

mx=max(mx,ans);
}

if(mx==0){
    cout<<n/2<<endl;
}else{
cout<<mx<<endl;
}
}
}