#include<iostream>
using namespace std;

int main(){
string str="TUesDaY";
for(int i=0;str[i]!='\0';i++){
    if(str[i]>96 && str[i]<123){
        str[i]=str[i]-32;
      }  
}
cout<<str;

    return 0;
}