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
    Rectangle r;
    Rectangle *p;

    p=&r;
    r.lenght=10;
    p->lenght=10;
    p->breath=5;
  cout<<p->area()<<endl;

}