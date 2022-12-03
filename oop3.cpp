#include<iostream>
using namespace std;

class Rectangle
{
private :
int lenght;
int breath;
public  :
int area()
{
    return lenght*breath;
}
int perimeter()
{
    return 2*(lenght+breath);
}
};
int main(){
    Rectangle r;
    //r.lenght=10;
   // r.breath=5;
    cout<<r.area();
}