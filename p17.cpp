#include<iostream>
using namespace std;

int main(){
int a,b,c,s[6];
cin>>a>>b>>c;
s[0]=a*b*c;
s[1]=(a+b)*c;
s[2]=a+b*c;
s[3]=a*(b+c);
s[4]=a*b+c;
s[5]=a+b+c;
for(int i=0;i<5;i++){
    for(int j=0;j<5-i;j++){
        int x=0;
      if(s[j]>s[j+1]){
        x=s[j];
        s[j]=s[j+1];
        s[j+1]=x;
      }

    }
}

cout<<s[5];

    return 0;
}