#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
int a=0,b=0;
for(int i=0;i<n;i++){
cin>>v[i];
}
int ans=-1;
int start=0,end=1e9;
while(start<=end){
    int mid=start+(end-start)/2;

bool give1=true,give2=true;
for(int i=0;i<n-1;i++){
    if(abs(v[i]-mid)>abs(v[i+1]-mid)&&v[i]>v[i+1]){
       give1=false;
    }if(abs(v[i]-mid)>abs(v[i+1]-mid)&&v[i]<v[i+1]){
       give2=false;
    }
}

if(!give1){
    start=mid+1;
}else if(!give2){
    end=mid-1;
}else{
    ans=mid;
    break;
}

}
      
cout<<ans<<endl;
}
}