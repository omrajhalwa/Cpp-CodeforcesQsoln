#include<bits/stdc++.h>
using namespace std;
#define int long  long



signed main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n+1);
int eq=0,same=0;
for(int i=1;i<=n;i++){
cin>>v[i];
if(v[i]==i){
    eq++;
}
}


if(eq==n){
    cout<<0<<endl;
}else if(v[1]==1||v[n]==n){
    cout<<1<<endl;
}else if(v[1]==n&&v[n]==1){
    cout<<3<<endl;
}else{
    cout<<2<<endl;
}

}

}