#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n+2);

for(int i=0;i<n;i++){
   cin>>v[i];
}

int ans=0,zero=0;
bool give=false;
for(int i=1;i<=n;i++){
    
    if(v[i]==0){
        zero++;
    }if(i>0&&i<n-1&&v[i-1]>0&&v[i]==0&&v[i+1]>0){
        give=true;
        break;
    }
}

if(zero==n){
    cout<<0<<endl;
}else if(give){
    cout<<2<<endl;
}else {
    cout<<1<<endl;
}



}


}