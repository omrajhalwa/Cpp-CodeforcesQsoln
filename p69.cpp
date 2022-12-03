#include<iostream>
using namespace std;

int main(){
string s;
cin>>s;
 long long int l=0,c=0;
for(int i=1;i<s.size()-1;i++){
if(s[i]=='^'){
  long  int j,k;
    j=i;
    k=i;
while(j>=0){
if(s[j]=='9'){
    c=c+9*(i-j);
}if(s[j]=='8'){
    c=c+8*(i-j);
}if(s[j]=='7'){
    
    c=c+7*(i-j);
    
}if(s[j]=='6'){
    c=c+6*(i-j);
}if(s[j]=='5'){
    c=c+5*(i-j);
}if(s[j]=='4'){
    c=c+4*(i-j);
}if(s[j]=='3'){
    c=c+3*(i-j);
}if(s[j]=='2'){
    c=c+2*(i-j);
}if(s[j]=='1'){
    c=c+1*(i-j);
}

    j--;
}

while(k<s.size()){
if(s[k]=='9'){
    l=l+9*(k-i);
}if(s[k]=='8'){
    l=l+8*(k-i);
}if(s[k]=='7'){
    l=l+7*(k-i);
}if(s[k]=='6'){
    l=l+6*(k-i);
}if(s[k]=='5'){
    l=l+5*(k-i);
}if(s[k]=='4'){
    l=l+4*(k-i);
}if(s[k]=='3'){
    l=l+3*(k-i);
}if(s[k]=='2'){
    l=l+2*(k-i);
}if(s[k]=='1'){
    l=l+1*(k-i);
}

    k++;
}


}
}




if(c>l){
    cout<<"left";
}else if(c==l){
    cout<<"balance";
}else{
    cout<<"right";
}







}