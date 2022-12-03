#include<iostream>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
int n,x,y;
cin>>n>>x>>y;
int r,p,k=n-1,m=0;
r=max(x,y);
p=min(x,y);
if(x==0&&y==0){
    cout<<-1<<endl;
}else if(x>0&&y>0){
    cout<<-1<<endl;
}else if(k%r==0){
    int h=2,l=0;
    for(int i=0;i<n-1;i++){
        cout<<h<<" ";
        l++;m++;
        if(l==r){
            l=0;
            h=h+r;
        }
    }
cout<<endl;




}else if(m==0){
    cout<<-1<<endl;
}
}




}




