#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace  std;
struct Rectangle{
int lenght;
int breadth;

};



int main(){
struct Rectangle r={10,5};

struct Rectangle *p=&r;
p=new Rectangle;
r.lenght=15;
p->lenght=20;
cout<<r.lenght;

}