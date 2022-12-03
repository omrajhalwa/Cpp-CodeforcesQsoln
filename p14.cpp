#include<iostream>
using namespace std;

int main(){
string s,b;
int p=0;
cin>>s;
int i=0,c=0,k;
while(i<s.length()){
 if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){ 
   
    i=i+3;
 k=i;
 
 }else {
   
   
   
   if(i!=c+1&&p>0){
       cout<<" ";
       
   }
    cout<<s[i];
   
  c=i;
   i++;
   p++;
 }

}


}






