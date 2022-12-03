#include<bits/stdc++.h>
using namespace std;




int main(){
    int t;
    cin>>t;
    while(t--){

int n;
cin>>n;
int a[n];
for(int i=1;i<=n;i++){
cin>>a[i];
}int l=0;
for(int i=1;i<=n;i++){
   for(int j=1;j<=n;j++) {
    int p=0;
if(__gcd(a[i],a[j])==1){
    p=i+j;
}
if(p>l){
    l=p;
}}
}

if(l==0){
    cout<<-1<<endl;
}else{
cout<<l<<endl;
}



    }
}