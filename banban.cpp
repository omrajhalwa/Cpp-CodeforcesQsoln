#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int f=3*n;


if(n%2==0){
    cout<<n/2<<endl;
}else{
    cout<<(n/2)+1<<endl;
}
if(n%2==0){
    int x=1,y=f;
    for(int i=0;i<n/2;i++){
        cout<<x<<" "<<y<<endl;
        x=x+3;
        y=y-3;
    }
}else{
int q=1,w=f;
for(int i=0;i<(n/2)+1;i++){
        cout<<q<<" "<<w<<endl;
        q=q+3;
        w=w-3;
    }
   
}


}





}