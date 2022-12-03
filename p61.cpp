#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[102];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
int b=1,p=0;
for(int i=0;i<n-1;i++)
{
     if(a[i]==a[i+1]){
        b++;
     }

     if(b>p){
     p=b;
     }
     if(a[i]!=a[i+1]){
        b=0;
     }
}int k=0;
k=n-p;
if(p>=k+2){
    cout<<"NO";
}else{
    cout<<"YES";
}
}