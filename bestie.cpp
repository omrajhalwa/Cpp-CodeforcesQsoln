#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
long long int n,a[101];
cin>>n;
for(int i=1;i<=n;i++){
cin>>a[i];
}
long long int ans=a[1];
for(int i=1;i<=n;i++){
    ans=__gcd(ans,a[i]);
}
int p=0;
if(ans==1){
    cout<<0<<endl;
    p++;
}
else if(p==0){
if(__gcd(ans,__gcd(a[n],n))==1){
    cout<<1<<endl;
}else if(__gcd(ans,__gcd(a[n-1],n-1))==1){
    cout<<2<<endl;
}else{
    cout<<3<<endl;
}

}




}






}




