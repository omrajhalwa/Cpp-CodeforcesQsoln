#include<iostream>
using namespace std;

int main(){
int n,r;
cin>>n;
if(n==0){
cout<<'O'<<'-'<<'|'<<'-'<<'O'<<'O'<<'O'<<'O';
}
while(n>0){
    r=n%10;
    n=n/10;
    
    if(r==0){
        cout<<'O'<<'-'<<'|'<<'-'<<'O'<<'O'<<'O'<<'O'<<endl;
        }else if(r==1){
        cout<<'O'<<'-'<<'|'<<'O'<<'-'<<'O'<<'O'<<'O'<<endl;
        }else if(r==2){
        cout<<'O'<<'-'<<'|'<<'O'<<'O'<<'-'<<'O'<<'O'<<endl;
        }else if(r==3){
        cout<<'O'<<'-'<<'|'<<'O'<<'O'<<'O'<<'-'<<'O'<<endl;
        }else if(r==4){
        cout<<'O'<<'-'<<'|'<<'O'<<'O'<<'O'<<'O'<<'-'<<endl;
        }else if(r==5){
        cout<<'-'<<'O'<<'|'<<'-'<<'O'<<'O'<<'O'<<'O'<<endl;
        }else if(r==6){
        cout<<'-'<<'O'<<'|'<<'O'<<'-'<<'O'<<'O'<<'O'<<endl;
        }else if(r==7){
        cout<<'-'<<'O'<<'|'<<'O'<<'O'<<'-'<<'O'<<'O'<<endl;
        }else if(r==8){
        cout<<'-'<<'O'<<'|'<<'O'<<'O'<<'O'<<'-'<<'O'<<endl;
        }else if(r==9){
        cout<<'-'<<'O'<<'|'<<'O'<<'O'<<'O'<<'O'<<'-'<<endl;
        }
}

}