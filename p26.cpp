#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t,x=0,y=0,z=0,k;
    vector<int>a(5000);
cin>>t;
for(int i=1;i<=t;i++){
    cin>>a[i];
}

for(int i=1;i<=t;i++){
    if(a[i]==1){
        x++;
        
    }else if(a[i]==2){
        y++;
        
    }else if(a[i]==3){
        z++;
        
    }
}
if(x>0&&y>0&&z>0){
    if(x<y&&x<z){
        cout<<x<<endl;
        k=x;
    }else if(y<z){
        cout<<y<<endl;
        k=y;
    }else{
        cout<<z<<endl;
        k=z;
    }
}else{
    k=0;
    cout<<k;
}

if(k!=0){
for(int j=0;j<k;j++){
    int b=0,c=0,d=0;
for(int i=1;i<=t;i++){
    if(a[i]==1&&b<1){
        cout<<i<<" ";
        a[i]=0;
        b++;
        
    }else if(a[i]==2&&c<1){
        cout<<i<<" ";
        a[i]=0;
        c++;
    }else if(a[i]==3&&d<1){
        cout<<i<<" ";
        a[i]=0;
        d++;
    }





}
cout<<endl;
}
}

}