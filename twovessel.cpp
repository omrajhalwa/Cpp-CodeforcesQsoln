#include<bits/stdc++.h>
using namespace std;
#define int long long



signed main(){

     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;cin>>t;
while(t--){

int a,b,c;
cin>>a>>b>>c;
int total=a+b;
int div=total/2;
int mx=max(a,b);
int rem=mx-div;

if(rem%c==0){
    cout<<rem/c<<endl;
}else{
    cout<<rem/c+1<<endl;
}

}
}