#include<iostream>
using namespace std;

int main(){
int n,k,a[2001],count=0;
cin>>n>>k;
for(int i=1;i<=n;i++){
    cin>>a[i];
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        int x;
        if(a[j]>a[j+1]){
          x=a[j];
          a[j]=a[j+1];
          a[j+1]=x;
        }
    }
}

for(int i=1;i<=n;i++){
   if(i%3==0){
   if((5-a[i])>=k){
      count++;    
   }
}}

cout<<count;



}