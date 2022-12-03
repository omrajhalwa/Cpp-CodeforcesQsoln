#include<bits/stdc++.h>
using namespace std;

int main(){
int x1,y1,x2,y2,x3,y3,x4,y4,a,b,c;
cin>>x1>>y1>>x2>>y2;

if(x1!=x2&&y1!=y2){
        if(x1<x2){
    b=x2-x1;
       }else{
        b=x1-x2;
       }
        if(y1<y2){
    c=y2-y1;
       }else{
        c=y1-y2;
       }

if(b==c){x3=x2;
y3=y1;
x4=x1;
y4=y2;



cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;}
else{
    cout<<-1;
}

}else if(x1!=x2&&y1==y2){
    if(x1<x2){
    a=x2-x1;
       }else{
        a=x1-x2;
       }
x3=x1;
x4=x2;
y4=a+y2;
y3=a+y1;

cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
}else if(x1==x2&&y1!=y2){
   if(y1<y2){
    a=y2-y1;
       }else{
        a=y1-y2;
       }
x3=a+x1;
x4=a+x2;
y3=y1;
y4=y2;

    
cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
}


}