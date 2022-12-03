#include<iostream>
#include<cstring>
using namespace std;

int main(){

char h[104];
cin.getline(h,104);
char l[104];
cin.getline(l,104);
int a,b,f=0,g=0,j=0;
for(int i=0;h[i]!='\0';i++){
     if(h[i]>=65&&h[i]<=90){
    h[i]=h[i]+32;
    }}
for(int i=0;l[i]!='\0';i++){
    if(l[i]>=65&&l[i]<=90){
    l[i]=l[i]+32;
    }}

while(h[j]==l[j]&&j<strlen(h)){
    j++;
}
f=h[j];
g=l[j];

if(f==g)
cout<<"0";
else if(f>g)
cout<<"1";
else if(f<g)
cout<<"-1";


return 0;
}