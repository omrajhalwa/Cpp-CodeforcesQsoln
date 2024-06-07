#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n);
vector<int>c(n);
for(int &x:v){cin>>x;}
for(int &y:c){cin>>y;}
sort(v.begin(),v.end(),greater<int>());
sort(c.begin(),c.end(),greater<int>());
vector<int>pre1;
vector<int>pre2;
int p=0,k=0;
for(int i=0;i<n;i++){
    p+=v[i];
    pre1.push_back(p);
    k+=c[i];
    pre2.push_back(k);
}

int start=0,end=10000000000000000;
int ans=0;
while(start<=end){
int mid=start+(end-start)/2;
int x;
int val;

if(((mid+n)-(mid+n)/4)<=mid){
    x=mid*100;
}else{
    x=pre1[((mid+n)-(mid+n)/4)-mid-1]+mid*100;
}




if(((mid+n)-(mid+n)/4)<=n){
    val=pre2[((mid+n)-(mid+n)/4)-1];
}else{
    val=pre2[pre2.size()-1];
}

if(x>=val){
ans=mid;
end=mid-1;
}else{
    start=mid+1;
}



}
cout<<ans<<endl;
}
}