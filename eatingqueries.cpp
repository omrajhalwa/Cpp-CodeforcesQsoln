#include<bits/stdc++.h>
using namespace std;

#define int long long
//jai shree ram

signed main(){

int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}sort(v.begin(),v.end(),greater<int>());
int a=v[0];
for(int i=1;i<n;i++){
a+=v[i];
v[i]=a;
}


while(m--){
    int k,ans=-1;
    cin>>k;
int i=0,j=n-1;
int mid;
while(i<j&&i!=j-1){
mid=(i+j)/2;

if(k==v[mid]){
    i=mid;
    j=mid+1;
}
else if(k<v[mid]){
    j=mid;
}else if(k>v[mid]){
    i=mid;
}
}
if(k<=v[i]){
    ans=i+1;
}else if(k<=v[n-1]){
    ans=j+1;
}

cout<<ans<<endl;
}

}

}