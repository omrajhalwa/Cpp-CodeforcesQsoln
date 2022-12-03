#include<iostream>
using namespace std;


class Base{

public:
void display(){
    cout<<"display the base"<<endl;
}





};
class Derived:public Base{
public:
void show(){
    cout<<"show fn of derived class"<<endl;
}
};






int main(){

Derived d;
d.display();
d.show();





}