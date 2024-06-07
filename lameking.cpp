#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;cin>>t;
while(t--){
int a,b;
cin>>a>>b;
a=abs(a);
b=abs(b);
if(abs(a-b)>1){
    cout<<max(a,b)*2-1<<endl;
}else{
    cout<<a+b<<endl;
}

}

}