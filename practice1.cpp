#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){

string s;
cin>>s;
int i=0,b;
b=s.length();
for(int i=0;s[i]!='\0';i++){
    
    if(s[i]>=65&&s[i]<=90){
    s[i]=s[i]+32;
    }
}
for(int i=0;s[i]!='\0';i++ ){
  if(s[i]!= 'a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
    cout<<'.'<<s[i];
  }
}
return 0;

}