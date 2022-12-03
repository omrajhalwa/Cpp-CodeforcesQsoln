#include<iostream>
#include<cstring>
using namespace std;

int main(){
 string s;
 cin>>s;
 
 int i,j;
 char x;
 for(i=s.size()-1;i>0;i-=2){
   for(j=0;j<i;j+=2){

    if(s[j]<s[j+2]){
           x=s[j];
           s[j]=s[j+2];
           s[j+2]=x;

    }
        
   }



    

 }








cout<<s;

}