#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){

int t;cin>>t;
while(t--){
int n;cin>>n;
vector<int>v(n+1);
vector<int>c(n+1);
for(int i=0;i<n;i++){
    cin>>v[i];
}for(int i=0;i<n;i++){
    cin>>c[i];
}
bool give=true;
v[n]=v[0];
c[n]=c[0];

for(int i=0;i<n;i++){
    if(v[i]>c[i]){
        give=false;
        break;
    }
   if(v[i]!=c[i]&&c[i+1]<c[i]-1){
    give=false;
    break;
   }


}
if(give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}