#include<iostream>
#include<math.h>
using namespace std;

int main(){

int x1,x2,y1,y2;
float z;
cout<<"Enter the value of point x1,x2,y1,y2";
cin>>x1>>x2>>y1>>y2;
z=sqrt((x2-x1)*(x2-x1)-(y2-y1)*(y2-y1));

cout<<"the distance btw two point is"<<z<<endl;


    return 0;
}