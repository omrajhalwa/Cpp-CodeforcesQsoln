#include<bits/stdc++.h>
using namespace std;
#define int long long



signed main(){

     ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int t;cin>>t;
while(t--){
int l,r;
cin>>l>>r;

int n=10000000;int a=-1,b=-1;bool give=false;
for(int i=2;i*i<=n;i++){
    //l->not 1
    

    for(int j=i;j<=r;j+=i){
       
       if(l<=j+i&&j+i<=r&&!give){
         a=i,b=j;
         give=true;
       }
    }
}

if(!give){
    cout<<-1<<endl;
}else{
    cout<<a<<" "<<b<<endl;
}
}
}