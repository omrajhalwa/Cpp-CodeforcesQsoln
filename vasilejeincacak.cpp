


#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){
int n,k,x;
cin>>n>>k>>x;
int p=k+1;
for(int i=1;i*(i+1)/2<=n;i++){
    if(x==(i*(i+1)/2)){
      p=i;
        break;
    }else if (x<(i*(i+1)/2))
    {p=i-1;
        
    }
    
}

if(k<=p){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}