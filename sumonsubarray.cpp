#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>v(40,-1000);
int cnt=0;
for(int i=0;i<n;i++){

int p=i+1;
if(p*(p+1)/2==k){
v[i]=10;break;
}else if(p*(p+1)/2>k){
    k-=(i*(i+1)/2);
v[i]=-1*((cnt+1-k)*10-1);
break;
}else{
    v[i]=10;
    cnt++;
}

}


for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}cout<<endl;

}

}