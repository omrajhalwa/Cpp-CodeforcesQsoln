#include<iostream>
using namespace std;
int main ()
{

    int a=0,x,t,A[t],sum=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>A[i];
        sum=sum+A[i];}
    
for(int i=t-1;i>0;i--){
    for(int j=0;j<i;j++){
        
        if(A[j]<A[j+1]){
            x=A[j];
            A[j]=A[j+1];
            A[j+1]=x;
            
        }
        
    }
}

int o=1;
int i=0;
while(i<t){
 if(a+=A[i]){
       if(sum/2>a){
           o++;}
           else if(sum/2==a) {
               o++;
               
           }}
i++;}

cout<<o;

}

