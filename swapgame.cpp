#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;


while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    
}
 a[0]=a[0]-1;
sort(a,a+n);
int q=a[0],r=a[1];
int sum;

    sum=q+r;

if(sum%2==0){
    cout<<"Alice"<<endl;
}else{
    cout<<"Bob"<<endl;
}





}





}