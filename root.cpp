#include<iostream>
#include<math.h>
using namespace std;

int main(){

int a,b,c,r1,r2;

cout<<"enter the a,b,c\n";
cin>>a>>b>>c;

r1=(-b+sqrt(b*b-4*a*c))/(2*a);
r2=(-b-sqrt(b*b-4*a*c))/(2*a);

cout<<"the root is"<<endl<<r1<<" "<<r2;






    return 0;
}