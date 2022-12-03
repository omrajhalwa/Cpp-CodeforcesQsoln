#include<iostream>
using namespace std;

int main(){
int x=10;
int &y=x;
cout<<"the value of x  "<<x<<endl;
x++;
y++;
cout<<x<<endl;
cout<<y<<endl;
cout<<&x<<" "<<&y<<endl;


    return 0;
}