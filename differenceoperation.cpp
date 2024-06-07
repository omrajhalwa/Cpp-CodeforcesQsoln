#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int t;
cin>>t;
while(t--){

int n;
cin>>n;
int a[n],p=0;
for(int i=0;i<n;i++){
cin>>a[i];
}for(int i=1;i<n;i++){
if(__gcd(a[i],a[i-1])==a[i-1]){
p++;
a[i]=__gcd(a[i],a[i-1]);
}
    

}


if(p==n-1){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}



}


}