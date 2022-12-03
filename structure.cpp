#include<iostream>
using namespace std;


struct Rectangle{

    int lenght;
    int breadth;
    char x;

};

int main(){

struct Rectangle r1={1,2};

cout<<r1.lenght<<endl;
cout<<r1.breadth<<endl;
r1.lenght=45;
r1.breadth=90;
cout<<r1.lenght<<endl;
cout<<r1.breadth<<endl;

}








