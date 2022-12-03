#include<iostream>
using namespace std;

class Rectangle{
    public :
    int lenght; 
    int breath;

    int area(){
        return lenght*breath;
    }
    int perimeter(){
        return 2*(lenght+breath);
    }
};
int main(){
    Rectangle r1,r2;
    r1.lenght=10;
    r1.breath=5;
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    r2.lenght=15;
    r2.breath=10;
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
}