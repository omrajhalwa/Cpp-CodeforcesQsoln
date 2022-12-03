#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;
string s;
cin>>s;
s[n]='1';
s[n+1]='1';

int i=0;
while(i<n){
if(s[i]=='1'&&(s[i+2]!='0'||s[i+3]=='0')){
    cout<<'a';
}else if(s[i]=='2'&&(s[i+2]!='0'||s[i+3]=='0')){
    cout<<'b';
}else if(s[i]=='3'&&(s[i+2]!='0'||s[i+3]=='0')){
    cout<<'c';
}else if(s[i]=='4'&&(s[i+2]!='0'||s[i+3]=='0')){
    cout<<'d';
}else if(s[i]=='5'&&(s[i+2]!='0'||s[i+3]=='0')){
    cout<<'e';
}else if(s[i]=='6'&&(s[i+2]!='0'||s[i+3]=='0')){
    cout<<'f';
}else if(s[i]=='7'&&(s[i+2]!='0'||s[i+3]=='0')){
    cout<<'g';
}else if(s[i]=='8'&&(s[i+2]!='0'||s[i+3]=='0')){
    cout<<'h';
}else if(s[i]=='9'&&(s[i+2]!='0'||s[i+3]=='0')){
    cout<<'i';
}else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
    cout<<'j';
}else if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'){
    cout<<'k';
}else if(s[i]=='1'&&s[i+1]=='2'&&s[i+2]=='0'){
    cout<<'l';
}else if(s[i]=='1'&&s[i+1]=='3'&&s[i+2]=='0'){
    cout<<'m';
}else if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='0'){
    cout<<'n';
}else if(s[i]=='1'&&s[i+1]=='5'&&s[i+2]=='0'){
    cout<<'o';
}else if(s[i]=='1'&&s[i+1]=='6'&&s[i+2]=='0'){
    cout<<'p';
}else if(s[i]=='1'&&s[i+1]=='7'&&s[i+2]=='0'){
    cout<<'q';
}else if(s[i]=='1'&&s[i+1]=='8'&&s[i+2]=='0'){
    cout<<'r';
}else if(s[i]=='1'&&s[i+1]=='9'&&s[i+2]=='0'){
    cout<<'s';
}else if(s[i]=='2'&&s[i+1]=='0'&&s[i+2]=='0'){
    cout<<'t';
}else if(s[i]=='2'&&s[i+1]=='1'&&s[i+2]=='0'){
    cout<<'u';
}else if(s[i]=='2'&&s[i+1]=='2'&&s[i+2]=='0'){
    cout<<'v';
}else if(s[i]=='2'&&s[i+1]=='3'&&s[i+2]=='0'){
    cout<<'w';
}else if(s[i]=='2'&&s[i+1]=='4'&&s[i+2]=='0'){
    cout<<'x';
}else if(s[i]=='2'&&s[i+1]=='5'&&s[i+2]=='0'){
    cout<<'y';
}else if(s[i]=='2'&&s[i+1]=='6'&&s[i+2]=='0'){
    cout<<'z';
}

















if(s[i+2]=='0'&&s[i+3]!='0'){
    i=i+3;
}else{
    i++;
}




}

cout<<endl;

}















}