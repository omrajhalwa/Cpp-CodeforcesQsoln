#include<iostream>
using namespace std;

class Rectangle
{
public :
int lenght;
int breath;

int area()
{
    return lenght*breath;
}
int perimeter()
{
    return 2*(lenght+breath);
}
};
int main()
{
   Rectangle *p;
   p=new Rectangle;

    Rectangle *q=new Rectangle();

    p->lenght=15;
    p->breath=10;
    cout<<p->area();
    cout<<q<<endl;
}