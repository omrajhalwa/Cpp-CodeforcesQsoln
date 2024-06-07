#include<bits/stdc++.h>
using namespace std;
#define int long long 




signed main(){
    int t;cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto&x:v){cin>>x;}

   bool give=true;
   for(int i=0;i<n-1;i++){


    if(i>=2&&v[i]>v[i+1]){
  int a=abs(v[i]-v[i+1]);
  if(v[i-2]+a>v[i-1]){
    give=false;
  }
    }
   }



if(n%2!=0){
    cout<<"YES"<<endl;

}else if(n==2){
 if(v[0]>v[1]){
    cout<<"NO"<<endl;
 }   else{
    cout<<"YES"<<endl;
 }
}else if(n%2==0&&give){
cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}

}