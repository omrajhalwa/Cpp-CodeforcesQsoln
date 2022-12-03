#include<iostream>
using namespace std;

int main(){
int n,a[26],chest=0,bicep=0,back=0;
cin>>n;
int i=1;
while(i<=n){
cin>>a[i];

    i++;
}
int j=1;
while(j<=n){
if(j%3==1){
     chest+=a[j];
}else if(j%3==2){
    bicep+=a[j];
}else {
         back+=a[j];
}

    j++;
}

if(chest>bicep&&chest>back){
    cout<<"chest";
}else if(bicep>back){
    cout<<"biceps";
}else{
    cout<<"back";
}




}