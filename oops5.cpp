#include<iostream>
using namespace std;

class Rectangle{
    private :
    int lenght;
    int breath;

    public :
    Rectangle(){
        lenght=1;
        breath=1;
    }
    Rectangle(int l,int b)
    {
      setLenght(l);
      setBreath(b);
    }

void setLenght(int l){
    if(l>0){
        lenght=l;
    }else
    lenght=0;
}
void setBreath(int b){
if(b>0){
    breath=b;
}else
breath=1;
}
int getlenght(){
    return lenght;
    }
    int getbreath(){
        return breath;
    }
    int area(){
        return lenght*breath;
    } 
    Rectangle(Rectangle  & r){
        lenght=r.lenght;
        breath=r.breath;
    }
};

int main(){
Rectangle r1(10,5);
Rectangle r2(r1);
cout<<r1.area()<<endl;
cout<<r2.area()<<endl;
}