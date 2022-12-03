#include<iostream>
using namespace std;
class Rectangle{
    private :
    int lenght;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle & r);
    int getLenght(){return lenght;}
    int getBreadth(){return breadth;}
    void setLenght(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
int main(){
Rectangle r1(10,10);
cout<<"area"<<r1.area()<<endl;
if(r1.isSquare())
cout<<"yes";
}

Rectangle ::Rectangle(){
lenght =1;
breadth=1;
}
Rectangle::Rectangle(int l,int b){
    lenght=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle & r){
    lenght=r.lenght;
    breadth=r.breadth;
}
void Rectangle::setLenght(int l){
    lenght=1;
}
void Rectangle::setBreadth(int b){
    breadth=1;
}
int Rectangle::area(){
    return lenght*breadth;
}
int Rectangle::perimeter(){
    return 2*(lenght+breadth);
    }

bool Rectangle::isSquare(){
    return (lenght==breadth);
}
Rectangle::~Rectangle(){
    cout<<"reactangle destroyed";
}

