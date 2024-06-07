#include<bits/stdc++.h>
using namespace std;

signed main(){
int n;cin>>n;int m,k;cin>>m>>k;
vector<int>v(n);int mn=INT_MAX,mx=0;
for(int i=0;i<n;i++){
    cin>>v[i];
     mn=min(mn,v[i]);
     mx=max(mx,v[i]);
}
int start=mn,end=mx;
int ans=0;
while(start<=end){
int mid=start+(end-start)/2;
int p=0,l=0;
for(int i=0;i<n;i++){
if(v[i]<=mid){
    l++;
    if(l==k){
        p++;l=0;
    }
}else{
    
    l=0;
}
}


if(p>=m){
    ans=mid;
    end=mid-1;
}else{
    start=mid+1;
}


}


cout<<ans<<endl;



}