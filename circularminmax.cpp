#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}

sort(v.begin(),v.end());
vector<int>c(1);
int i=0,j=n-1,k=n/2;

while(k--){


c.push_back(v[i]);
c.push_back(v[i+n/2]);i++;
}




if(n%2==1){
    c.push_back(v[n-1]);
}
c[0]=c[n];
c.push_back(c[1]);
bool give=true;
for(int i=1;i<=n;i++){
    if((c[i-1]<c[i]&&c[i]>c[i+1])||(c[i-1]>c[i]&&c[i]<c[i+1])){
        
    }else{
        give=false;break;
    }
}
if(give){
    cout<<"YES"<<endl;
    for(int i=1;i<n+1;i++){
        cout<<c[i]<<" ";
    }cout<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}