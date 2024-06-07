#include<bits/stdc++.h>
using namespace std;

int main(){
int v[10001];int x[100001];





int n,a,b,ans=0;
cin>>n>>a>>b;
for(int i=0;i<n;i++){
    v[i]=0;
    x[i]=0;
}

if(n>a+b){
    ans=n-a-b;
}
if(n==1&&a==b){
    ans=1;
}

int i=0,j=n-1;

    while(i<=j&&(a>0||b>0)){

     
if(i==j){
    if(a>0){
        v[i]=1;
        i++;
        a--;
    }else if(b>0){
        x[j]=1;
        j--;
        b--;
    }
}else{
  
        if(a>0){
            
            v[i]=1;
            a--;
            i++;
        }
    if(b>0){
        
        x[j]=1;
        b--;
        j--;
    }
  
}
    }
    
if(a>0){
    v[0]+=a;
}if(b>0){
    x[n-1]+=b;
}






cout<<ans<<endl;
for(int i=0;i<n;i++){
    cout<<v[i]<<":"<<x[i]<<endl;
}

}