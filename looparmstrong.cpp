#include<iostream>
using namespace std;

int main(){
int n,r,sum=0,m;
cout<<"enter the value of n\n";
cin>>n;
m=n;
while(n>0){
r=n%10;
n=n/10;
sum=sum+r*r*r;

}
if(m==sum)
cout<<"the armstrong no";
else
cout<<"not armstrong no";

    return 0;
}