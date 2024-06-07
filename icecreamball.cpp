#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){

int n;
cin>>n;


int ans=0;


int start=2,end=5e9;

while(start<=end){
int mid=start+(end-start)/2;
int l=((mid)*(mid-1)/2);
int r=((mid+1)*mid)/2;
if(l<=n&&n<r){
    ans=mid+n-l;
    break;
    
}else if(n<l){
    end=mid-1;
}else{
    start=mid+1;
}



    
}

cout<<ans<<endl;

}
}