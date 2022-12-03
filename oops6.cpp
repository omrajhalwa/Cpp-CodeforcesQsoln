#include<iostream>
using namespace std;
class Rectangle{
    private:
    int lenght;
    int breath;
    public:
    int area(){
        return lenght*breath;
    }
    int perimeter();
};
int Rectangle::perimeter(){
    return 2*(lenght+breath);
}
int main(){
    Rectangle r;
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
}