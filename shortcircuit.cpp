#include<iostream>
using namespace std;

int main(){
int a=5,b=7,i=5;
if (a>b && ++i>b)
// agar ek galat hai to dusra perform hi nahi hota
cout<<i;
else if(b>a && ++i)
cout<<i;





    return 0;
}