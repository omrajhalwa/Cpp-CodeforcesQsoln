#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int x,y;
cin>>x>>y;
if((x==1&&y<9)||(y==1&&x<9)||(x==2&&y==2)){
    cout<<1<<" "<<1<<endl;
}else if((x==2&&y==3)||(y==2&&x==3)||(x==3&&y==3)){
    cout<<2<<" "<<2<<endl;
}else{
    cout<<1<<" "<<1<<endl;
}






}





}