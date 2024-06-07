#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>v(n);
for(int &x:v){cin>>x;}

int ans=0;
int start=1,end=3e9;

while(start<=end){
    int mid=start+(end-start)/2;

int p=0;
for(int i=0;i<n;i++){
if(v[i]<mid){
    p+=mid-v[i];
}
}

if(p<=k){
    ans=mid;
    start=mid+1;
}else{
    end=mid-1;
}

}

cout<<ans<<endl;
}
}