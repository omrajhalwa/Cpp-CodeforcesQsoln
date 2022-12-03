#include<iostream>
using namespace std;

int main(){
int n,b=0,c=0,q=0,w=0,e=0,r=0,t=0,y=0,u=0;
char a[4][4];
cin>>n;
n=n*2;
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cin>>a[i][j];
        if(a[i][j]=='1'){
            b++;
        } if(a[i][j]=='2'){
            c++;
        } if(a[i][j]=='3'){
            q++;
        } if(a[i][j]=='4'){
            w++;
        } if(a[i][j]=='5'){
            e++;
        } if(a[i][j]=='6'){
            r++;
        } if(a[i][j]=='7'){
            t++;
        } if(a[i][j]=='8'){
            y++;
        } if(a[i][j]=='9'){
            u++;
        }
    }
}
if(q<=n&&c<=n&&b<=n&&w<=n&&e<=n&&r<=n&&t<=n&&y<=n&&u<=n){
    cout<<"YES";
}else{
    cout<<"NO";
}


}