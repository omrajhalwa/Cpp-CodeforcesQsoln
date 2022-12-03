#include<iostream>
using namespace std;

//int add(int x,int y){
//return x+y;
//}
/*int add(int x,int y,int z){
    return x+y+z;
}*/
float add(float x,float y){
    return x+y;
}
int main(){
    float a=10.9f,b=3.2f,c,d;
    c=add(a,b);
    d=add(a,b,c);
    cout<<c<<endl<<d<<endl;
}