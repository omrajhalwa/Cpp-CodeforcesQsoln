#include<iostream>
using namespace std;

int main(){
int i,n,sum=0;

cout<<"Enter the value of n";
cin>>n;


for(i=1;i<=n;i++){

if(n%i==0){
    sum=sum+i;

}
}

if(n*2==sum)
cout<<"perfect no"<<endl;
else
cout<<"not a perfect no";

return 0;}