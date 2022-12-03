#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    if(n==1){
        cout<<k;
    }else{
   if(k!=0){
     cout<<"1";
    for(int i=0;i<n-2;i++){
        cout<<"0";
    }cout<<k-1;}
    if(k==0&&n==1){
        cout<<"0";
    }else if(k==0&&n>0){
        cout<<"No solution";
    }
    }
}