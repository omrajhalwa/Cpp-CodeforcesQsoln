#include<iostream>
using namespace std;

int max(int a=0,int b=0,int c=0){
    return a>b && b>c ?a:(b>c? b:c);
}
int main(){
    cout<<max()<<endl;
    cout<<max(13)<<endl;
    cout<<max(10,13)<<endl;
    cout<<max(10,13,15)<<endl;
}