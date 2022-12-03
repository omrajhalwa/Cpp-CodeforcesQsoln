#include<iostream>
using namespace std;

int main(){
int n,c,a[101],x;
a[0]=0;
cin>>n>>c;
for(int i=1;i<=n;i++){
    cin>>a[i];
    
}
int j=n;
while(j>0){
    
    x=a[j-1]-a[j]-c;
    if(x>a[0]){
       a[0]=x;
    }
    
    j--;
}


cout<<a[0];


}