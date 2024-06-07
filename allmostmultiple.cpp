#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

    
int t;cin>>t;
while(t--){
int n,x;
cin>>n>>x;
vector<int>v(n+1);


for(int i=1;i<=n;i++){
v[i]=i;
}
v[1]=x;
v[x]=n;
v[n]=1;
if(n%x!=0){
    cout<<-1<<endl;
}else{
    int p=x;
for(int i=x+x;i<n;i+=x){
    if(v[p]%i==0&&v[i]%p==0&&v[p]>v[i]){
        v[p]^=v[i];
        v[i]^=v[p];
        v[p]^=v[i];
        p=i;
    }
}


for(int i=1;i<=n;i++){
    cout<<v[i]<<" ";
}cout<<endl;
}
}
}