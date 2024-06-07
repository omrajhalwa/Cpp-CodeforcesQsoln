#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;vector<int>v(n);
for(int &x:v){cin>>x;}

vector<int>pre(n+1,0);
for(int i=0;i<n;i++){
    pre[i+1]=v[i]+pre[i];
}
int start=1,end=n;int ans=0;
while(start<=end){
int mid=start+(end-start)/2;

cout<<'?'<<" "<<mid-start+1<<" ";
for(int i=start;i<=mid;i++){
cout<<i<<" ";
}
cout<<endl<<flush;
int x=0;
cin>>x;
 if(x==pre[mid]-pre[start-1]){
    start=mid+1;
}else{
    ans=mid;
    end=mid-1;
}



}

 cout<<'!'<<" "<<ans<<endl<<flush;

}

}