#include<iostream>
using namespace std;

int main(){
    int n,d,s,p=0,c,k,g;
cin>>n>>d;

for(int i=0;i<n;i++){
    cin>>s;
    p+=s;
}
c=(n-1)*10;
k=d-p-c;
g=(c+k)/5;
if(c+p<=d){
    cout<<g;
}else{
    cout<<-1;
}




}