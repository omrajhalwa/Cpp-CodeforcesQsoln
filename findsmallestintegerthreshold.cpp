#include<bits/stdc++.h>
using namespace std;

signed main(){
int ans=0,mx=0;
int n,k;cin>>n>>k;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    mx=max(mx,v[i]);
}



int start=1,end=mx;
while(start<=end){

int mid=start+(end-start)/2;
int sum=0;
for(int i=0;i<n;i++){
    if(v[i]%mid==0){
    sum+=v[i]/mid;}
    else{
        sum+=v[i]/mid+1;
    }
}

if(sum<=k){
    ans=mid;
    end=mid-1;
}else{
    start=mid+1;
}




}
cout<<ans<<endl;

}