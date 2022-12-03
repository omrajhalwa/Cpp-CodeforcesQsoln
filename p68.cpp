#include<bits/stdc++.h>
using namespace std;

int main(){
int n,a[101],s=1000000;

cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    int g=0,p;
  for(int j=0;j<a[i];j++){
    int r;
   cin>>p;
   r=p*5+15;
   g=g+r;


  }
if(g<s){
    s=g;
}

}





cout<<s;

}