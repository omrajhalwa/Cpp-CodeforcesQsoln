
#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  string s="hello";
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        int x=0;
      if(s[j]>s[j+1]){
        x=s[j];
        s[j]=s[j+1];
        s[j+1]=x;
      }

    }
}
}