#include<bits/stdc++.h>
using namespace std;
#define int long long 




signed main(){
    int t;cin>>t;
    while(t--){
int n=2;int m;
cin>>m;
int arr[2+1][m+1];
arr[0][0]=m*2;
arr[1][m-1]=m*2-1;
int k=1,p=m*2-2;
int r=0,o=0;
for(int i=0;i<m-1;i++){
if(i%2==0){
    if(r%2==0){
    arr[0][i+1]=k;
    arr[1][i]=k+1;
    k+=2;
    r++;
    }else{
        arr[0][i+1]=k+1;
    arr[1][i]=k;
    k+=2;r++;
    }
}else{
 if(o%2==0){
    arr[0][i+1]=p;
    arr[1][i]=p-1;
    p-=2;
    o++;
    }else{
        arr[0][i+1]=p-1;
    arr[1][i]=p;
    p-=2;o++;
    }


}
}
for(int i=0;i<2;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
}

}
}