#include<iostream>
#include<algorithm>
using namespace std;

int main(){
string a,b,c,d;
char bc;
int l1,l2,l3,l4,q=0,r=0;
cin>>a>>b>>c>>d;
l1=a.size()-2;
l2=b.size()-2;
l3=c.size()-2;
l4=d.size()-2;

if(l1<=l2/2&&l1<=l3/2&&l1<=l4/2){
bc=a[0];
q++;
}else if(l2<=l3/2&&l2<=l4/2&&l2<=l1/2){
bc=b[0];
q++;
}else if(l3<=l4/2&&l3<=l1/2&&l3<=l2/2){
bc=c[0];
q++;
}else if(l4<=l1/2&&l4<=l2/2&&l4<=l3/2){
bc=d[0];
q++;
}

 if(l1/2>=(l2)&&l1/2>=(l3)&&l1/2>=(l4)){
bc=a[0];
q++;
}else if(l2/2>=(l3)&&l2/2>=(l4)&&l2/2>=(l1)){
bc=b[0];
q++;
}else if(l3/2>=(l4)&&l3/2>=(l1)&&l3/2>=(l2)){
bc=c[0];
q++;
}else if(l4/2>=(l1)&&l4/2>=(l2)&&l4/2>=(l3)){
bc=d[0];
q++;
}



if(q==1){
    cout<<bc;
}else{
    cout<<"C";
}
}