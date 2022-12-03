#include<iostream>
using namespace std;

int main(){

int a[101],n;
cin>>n;
 if(n%2==0){
for(int i=1;i<=n;i++){
   a[i]=i;
   
    
}
for(int i=1;i<=n;i++){
    int x=0;
    if(i%2==0&&n!=1){
        x=a[i];
        a[i]=a[i-1];
        a[i-1]=x;
            
    cout<<a[i-1]<<" "<<a[i]<<" ";}
    
}}else{
    cout<<-1;
}





    return 0;
}