#include<iostream>
#include<cstring>
using namespace std;

class Rectangle{
private:
int lenght;
int breadth;
public:
int area();
    int perimeter();
Rectangle(int lenght,int breadth)
{
    this->breadth=breadth;
    this->lenght=lenght;
}

};
int main(){
Rectangle r(10,5);
cout<<r.area()<<endl;

return 0;
}
int Rectangle::area(){
    return lenght*breadth;
}
int Rectangle::perimeter(){
    return 2*(lenght+breadth);
    }