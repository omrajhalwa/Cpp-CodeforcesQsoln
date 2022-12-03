#include<iostream>
using namespace std;

int main(){
string str="tew ergre ergr";
int count=0;
for(int i=0;str[i]!='\0';i++){
    if(str[i]==97|str[i]==101|str[i]==105|str[i]==111|str[i]==117 )
    {count++;}
}
cout<<count;

    return 0;
}