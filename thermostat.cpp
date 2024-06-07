#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

int t;
cin>>t;
while(t--){
int l,r,x,a,b;
cin>>l>>r>>x;
cin>>a>>b;

int s,d;
s=a;
d=b;
a=min(s,d);
b=max(s,d);


int diff=abs(a-b);
if(diff==0){
    cout<<0<<endl;
}else if(diff>=x){
    cout<<1<<endl;
}else if(a-x>=l||b+x<=r){
cout<<2<<endl;
}
else if(l<=b-x&&r>=a+x){
    cout<<3<<endl;
}else{
    cout<<-1<<endl;
}














}







}