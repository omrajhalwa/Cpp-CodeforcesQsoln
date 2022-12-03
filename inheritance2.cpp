#include<iostream>
using namespace std;

class Rectangle{
private:
int lenght;
int breadth;
public:
Rectangle();
Rectangle(int l,int b);
Rectangle(Rectangle&r);
int getLenght(){return lenght;}
int getBreadth(){return breadth;}
void setLenght(int l);
void setBreadth(int b);
int area();
int perimeter();
bool isSquare();





};
class Cuboid:public Rectangle{
    private:
    int height;
    public:
    Cuboid(int h){
        height=h;
    }
    int getHeight(){return height;}
    void setHeight(int h){height=h;}
    int volume(){return getLenght()*getBreadth()*getHeight();}
};


int main(){
Cuboid c(5);
c.setBreadth(10);
c.setLenght(7);
cout<<c.volume()<<endl;
}
Rectangle::Rectangle(){
    lenght=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b){
    lenght=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle&r){
    lenght=r.lenght;
    breadth=r.breadth;
}
void Rectangle::setLenght(int l){
    lenght=l;
}
void Rectangle::setBreadth(int b){
    breadth=b;
}
int Rectangle::perimeter(){
    return 2*(lenght*breadth);
}
int Rectangle::area(){
    return lenght*breadth;
}
bool Rectangle::isSquare(){

}
