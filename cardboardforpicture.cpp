#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
int t;cin>>t;

while(t--){
int n,c;
cin>>n>>c;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}


auto istrue=[&](int x){

int ans=0;

for(int i=0;i<n;i++){
    ans+=(v[i]+2*x)*(v[i]+2*x);
    if(ans<0) return 1LL*-1;
}

return ans;
};



int start=1,end=1e9;

while(start<=end){
int mid=start+(end-start)/2;
//cout<<istrue(mid)<<endl;
if(istrue(mid)==c){
    cout<<mid;
    break;
}else if(istrue(mid)>c||istrue(mid)<0){
    end=mid-1;
}else{
    start=mid+1;
}


}

cout<<endl;
}
}