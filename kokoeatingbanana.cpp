#include<bits/stdc++.h>
using namespace std;



signed main(){
int n,h;cin>>n>>h;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());

int start=1,end=v[n-1],ans=v[n-1];
while(start<=end){
int mid=start+(end-start)/2;
int a=0;
for(int i=0;i<n;i++){
if(v[i]%mid==0){
    a+=v[i]/mid;
}else{
    a+=v[i]/mid+1;
}
}

if(a<=h){
    ans=min(mid,ans);
    end=mid-1;
}else{
    start=mid+1;
}



}




cout<<ans<<endl;



}