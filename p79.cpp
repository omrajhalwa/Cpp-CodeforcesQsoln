#include<bits/stdc++.h>
using namespace std;

int main(){
char t;
string a,b;
int a0,a1,b0,b1;
cin>>t;
cin>>a>>b;
if(a[0]=='A'){
a0=10;}
if(a[0]=='K'){
a0=9;}
if(a[0]=='Q'){
a0=8;}
if(a[0]=='J'){
a0=7;}
if(a[0]=='T'){
a0=6;}
if(a[0]=='9'){
a0=5;}
if(a[0]=='8'){
a0=4;}
if(a[0]=='7'){
a0=3;}
if(a[0]=='6'){
a0=2;}
if(b[0]=='A'){
b0=10;}
if(b[0]=='K'){
b0=9;}
if(b[0]=='Q'){
b0=8;}
if(b[0]=='J'){
b0=7;}
if(b[0]=='T'){
b0=6;}
if(b[0]=='9'){
b0=5;}
if(b[0]=='8'){
b0=4;}
if(b[0]=='7'){
b0=3;}
if(b[0]=='6'){
b0=2;}


if(a[1]==t&&b[1]!=t){
    cout<<"YES";
}else if(a0>b0&&(a[1]==b[1])){
    cout<<"YES";
}else{
    cout<<"NO";
} 





}

