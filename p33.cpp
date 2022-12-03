#include<iostream>
using namespace std;

int main(){

int n,r=1,p;
char a[101][101];
int pns=0;
cin>>n;
int j;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>a[i][j];
            
}}

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
         int ans=0;
        if(a[i][j+1]=='o'||a[i][j-1]=='o'||a[i+1][j]=='o'||a[i-1][j]=='o'){
            if(a[i][j+1]=='o'){
                ans++;
            }if(a[i][j-1]=='o'){
                ans++;
            }if(a[i+1][j]=='o'){
                ans++;
            }if(a[i-1][j]=='o'){
                ans++;
            }
             
        }if(ans%2==0){
            
        }else{
            pns++;
        }
    }
}

if(pns==0){
    cout<<"YES";
}else{
    cout<<"NO";
}

}