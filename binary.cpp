#include<iostream>
using namespace std;

int main(){
int a=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'&&s[i+1]=='1'){
        a+=2;
    }
}

cout<<a;


}