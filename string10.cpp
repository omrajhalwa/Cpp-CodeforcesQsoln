#include<iostream>
#include<string>
using namespace std;

int main(){
string str="hello";
cout<<str.length()<<endl;
cout<<str.capacity()<<endl;
str.resize(50);
cout<<str.capacity()<<endl;
cout<<str.max_size()<<endl;
    return 0;
}
