#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int lenght;
    int breadth;
    public:
    void setLenght(int l){
        if(l>=0)
        lenght=l;
        else
        lenght=0;
    }
    void setBreadth(int b){
        if(b>=0)
        breadth=b;
        else
        breadth=0;
    }
    int getLenght(){
        return lenght;
    }
    int getBreadth(){
        return breadth;
    }
    int area()
{
    return lenght*breadth;
}
};


int main(){
Rectangle r;
r.setLenght(10);
r.setBreadth(-5);
cout<<r.area()<<endl;
cout<<"lenght is"<<r.getLenght()<<endl;

}