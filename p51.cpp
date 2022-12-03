#include<iostream>
using namespace std;

int main(){
string s;
string l;
int pos=1,a=0;
cin>>s;
cin>>l;
int i=0;

    for(int j=0;j<l.length();j++){
       
        if(s[i]==l[j]){
            pos++;
           i++;
          
        }
    }

cout<<pos;




}