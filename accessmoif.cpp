#include<iostream>
using namespace std;

class circle{

public:
double radius;
double area(){
 return  3.14*radius*radius;
}
};
int main(){
    circle obj1;
    
    obj1.radius=2.1;
    cout<<obj1.area();
     return 0;
}