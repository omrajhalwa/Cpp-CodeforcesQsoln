#include<iostream>
using namespace std;

int main(){

    string s="";
    cin>>s;
    int i=0;
while(i<s.size()){

if(s[i]=='.'){
cout<<0;
i++;
}else if(s[i]=='-'&&s[i+1]=='.'){
cout<<1;
i=i+2;}
else if(s[i]=='-'&&s[i+1]=='-'){
cout<<2;
i=i+2;}
}




}