#include<iostream>
using namespace std;
class base{
public:
base(){
    cout<<"default of base"<<endl;
}
base(int x){
    cout<<"para,eterize of base"<<x<<endl;
}
};


class derived:public base{
public:
derived(){
    cout<<"default of derived"<<endl;
}
derived(int a){
    cout<<"parameter of derived"<<a;
}





};
int main(){
derived d(9);





}
