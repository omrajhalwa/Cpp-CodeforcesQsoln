#include<iostream>
using namespace std;

int main(){

float radius;
float area;

cout<<"enter the value of the radius ";
cin>>radius;
area = 3.14*radius*radius;
//cout.precion(X)is right to print exact 5 digit after dot
cout.precision(5);
cout<<fixed<<"the area is"<<area<<endl;




    return 0;

}