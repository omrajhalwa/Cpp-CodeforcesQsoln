#include<iostream>
using namespace std;

//other program will also made which in copy

int main(){
string str="madam";
string::reverse_iterator it;

for(it=str.rbegin();it!=str.rend();it++){
cout<<*it;
}


    return 0;
}