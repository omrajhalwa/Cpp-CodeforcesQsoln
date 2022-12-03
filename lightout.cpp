#include<bits/stdc++.h>
using namespace std;

int main(){
int  a[6][6];
char b[6][6];

for(int i=1;i<4;i++){
for(int j=1;j<4;j++){
    cin>>a[i][j];
}

}
for(int i=1;i<4;i++){
for(int j=1;j<4;j++){
    b[i][j]='1';
}

}
for(int i=1;i<4;i++){
for(int j=1;j<4;j++){
    if(a[i][j]%2!=0&&a[i][j]>0){
        if(b[i][j]=='1'){
            b[i][j]='0';
        }else{
            b[i][j]='1';
        }
   
   if(b[i+1][j]=='1'){
            b[i+1][j]='0';
        }else{
            b[i+1][j]='1';
        }if(b[i-1][j]=='1'){
            b[i-1][j]='0';
        }else{
            b[i-1][j]='1';
        }if(b[i][j+1]=='1'){
            b[i][j+1]='0';
        }else{
            b[i][j+1]='1';
        }if(b[i][j-1]=='1'){
            b[i][j-1]='0';
        }else{
            b[i][j-1]='1';
        }
    
    
    }
}

}
for(int i=1;i<4;i++){
for(int j=1;j<4;j++){
    cout<<b[i][j];
}
cout<<endl;
}







}