#include<iostream>
using namespace std;

int main(){

int t;
cin>>t;
for(int i=0;i<t;i++){
int n,d[10001];
cin>>n;
for(int j=1;j<=n;j++){
    cin>>d[j];
}
int c1[1001],c2[1002];
c1[1]=d[1];
c2[1]=d[1];
for(int j=2;j<=n;j++){
    c1[j]=d[j]+c1[j-1];
    c2[j]=c1[j-1]-d[j];
}
int p=0;
for(int j=2;j<=n;j++){
    if(d[j]!=0&&c2[j]>0){
        p++;
    }
}

if(p==0){
    for(int j=1;j<=n;j++){
        cout<<c1[j]<<" ";
    }cout<<endl;
}else{
    cout<<-1<<endl;
}

}




}