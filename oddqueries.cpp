#include<bits/stdc++.h>
using namespace std;
#define int long long

signed  main(){
int t;cin>>t;
while(t--){
int n,q;
cin>>n>>q;
vector<int>v(n);
int sum=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
}
vector<int>pre;
int p=0;
pre.push_back(0);
for(int i=0;i<n;i++){
    p+=v[i];
    pre.push_back(p);
}

while(q--){
    int a,b,k;
    cin>>a>>b>>k;
    int rum=k*(b-a+1);
   int op=pre[b]-pre[a-1];

   if(sum%2!=0){
    if(op%2==0&&rum%2==0){
      cout<<"YES"<<endl;
    }else if(op%2!=0&&rum%2!=0){
     cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


   }else{
if(op%2==0&&rum%2!=0){
      cout<<"YES"<<endl;
    }else if(op%2!=0&&rum%2==0){
     cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }



   }



}

}

}