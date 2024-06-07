#include<bits/stdc++.h>
using namespace std;

signed main(){
int n,k;cin>>n>>k;
vector<int>v(n);int tot=0,mx=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    mx=max(mx,v[i]);
    tot+=v[i];
}
int ans=tot;
int start=mx,end=tot;
while(start<=end){
int mid=start+(end-start)/2;
int div=1,p=0;
for(int i=0;i<n;i++){
p+=v[i];
if(p>mid){
    div++;
    p=0;
    p+=v[i];
}

}

if(div<=k){
    ans=min(ans,mid);
    end=mid-1;
}else if(div>k){
    start=mid+1;
}


}




cout<<ans<<endl;



}