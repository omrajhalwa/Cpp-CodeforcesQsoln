#include<iostream>
using namespace std;

int main(){
    int j,i,a=0;
    cin>>i>>j;
    while(i>0&&j>0){
        i--;
        j--;
       
        a++;
    }
    
    if(a%2==0){
        cout<<"Malvika";
    }else{
        cout<<"Akshat";
    }
    
    
    
    return 0;
}