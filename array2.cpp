#include<iostream>
using namespace std;

int main(){
 int A[10],n=0,i,key;

 for(i=0;i<10;i++){
     cin>>A[i];
 }
cout<<"enter key";
cin>>key;
for(i=0;i<10;i++){

if(key==A[i]){ 
    cout<<"fount at"<<endl<<i
    ;}
}
 return 0;
}