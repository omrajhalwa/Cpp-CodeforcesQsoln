#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n+1];
a[n]=196732;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int g=1,k=0;
for(int i=0;i<n-1;i++){
    if(a[i]==a[i+1]){
        g++;
    }
    if(a[i]==a[i+2]){
      k++;
    }
}


if(g==n){
    cout<<1<<endl;
}else if(k==n-2){
    cout<<(n/2)+1<<endl;
}
else{
    cout<<n<<endl;
}









}









}