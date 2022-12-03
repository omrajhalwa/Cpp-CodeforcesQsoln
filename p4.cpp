#include<iostream>
#include<cstring>
using namespace std;

int main(){
char h[101];
char l[102];
cin.getline(h,101);
cin.getline(l,101);
for(int i=0;h[i]!='\0';i++){
     if(h[i]>=65&&h[i]<=90){
    h[i]=h[i]+32;
    }}
for(int i=0;l[i]!='\0';i++){
    if(l[i]>=65&&l[i]<=90){
    l[i]=l[i]+32;
    }}
    cout<<(int)h<<endl<<(int)l;
/*if(h == l.size())
   cout<<"0";
else if(h.size()>l.size())
   cout<<"1";
else if(h.size()<l.size())
    cout<<"-1";
*/


return 0;
}