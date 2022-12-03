#include<iostream>
using namespace std;

int main(){
string s;
getline(cin,s);
int n,l=2;
char k;
n=s.size();

while(s[n-l]==' '){

l++;
}

k=s[n-l];

if(k=='a'||k=='e'||k=='i'||k=='o'||k=='u'||k=='A'||k=='Y'||k=='y'||k=='E'||k=='I'||k=='O'||k=='U'){
    cout<<"YES";
}else{
    cout<<"NO";
}





}