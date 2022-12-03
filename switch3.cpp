#include<iostream>
using namespace std;

int main(){

int x,y,choice;
cout<<"enter the value of x and y";
cin>>x>>y;
cout<<"choice of arthematic operation "<<endl;
cout<<"enter 1 for multiply \n enter 2 for division\n enter 3 for add\n and 4 for subtract\n";
cin>>choice;




switch (choice){

case 1: cout<<"Multiplication"<<endl<<x*y<<endl;
        break;
case 2: cout<<"division"<<endl<<x/y<<endl;
         break;
case 3: cout<<"addition"<<endl<<x+y<<endl;
break;
case 4: cout<<"subtraction"<<endl<<x-y<<endl;
break;
default :cout<<"wrong input";
break;






}
    return 0;

}