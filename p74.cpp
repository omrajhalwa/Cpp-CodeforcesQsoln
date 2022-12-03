#include<iostream>
using namespace std;

int main(){
int r1,r2,c1,c2,d1,d2,z,x,c,v;
cin>>r1>>r2;
cin>>c1>>c2;
cin>>d1>>d2;
int a[3][3];
a[1][1]=0;
a[1][2]=0;
a[2][1]=0;
a[2][2]=0;
int s=1;
while(s<10){
    int r=1;
    while(r<10){
    int q=1;
        while(q<10){
    int p=1;
            while(p<10){

if(p+q==r2&&r+s==r1&&q+s==c1&&r+p==c2&&p+s==d1&&r+q==d2){
  
a[1][1]=s;
a[1][2]=r;
a[2][1]=q;
a[2][2]=p;
    
}
           p++; }
       q++;
            
            }
    r++;
            
           }
    s++;
            
           
}

 if(a[1][1]!=a[1][2]&&a[1][1]!=a[2][1]&&a[1][1]!=a[2][2]&&a[1][2]!=a[2][1]&&a[1][2]!=a[2][2]&&a[2][1]!=a[2][2]&&a[1][1]!=0&&a[1][2]!=0&&a[2][1]!=0&&a[2][2]!=0){
    cout<<a[1][1]<<" "<<a[1][2]<<endl;
    cout<<a[2][1]<<" "<<a[2][2];
}else{
cout<<"-1";
}

}