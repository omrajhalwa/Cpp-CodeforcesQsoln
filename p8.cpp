#include<iostream>
using namespace std;

int main(){
int p;
cin>>p;
if(p%7==0||p%4==0||p%74==0||p%47==0||p%44==0||p%77==0){
    cout<<"YES";
}
else if((p%10==7||p%10==4 )&&(p/10==7||p/10==4||p/10==74||p/10==47||p/10==44||p/10==77)){
    cout<<"YES";
}
else
{cout<<"NO";}
    return 0;
}