#include<iostream>
using namespace std;

int main(){
int t,s[101],a[101],g[101],x,y,k,l,r=0,m=0;
cin>>t;
for(int i=0;i<t;i++){
    cin>>s[i];
    a[i]=s[i];
    g[i]=s[i];
}
    for(int i=0;i<t;i++){
        

    if(a[0]>=a[i]){

    }else{
        a[0]=a[i];
        
    }
}

x=a[0];

  for(int i=0;i<t;i++){
        

    if(g[0]<=g[i]){

    }else{
        g[0]=g[i];
        
    }
}

y=g[0];

if(x==s[0]&&y==s[t-1]){
    cout<<"0";
}else if(t==2){
    cout<<"1";
    
}else
{
      for(int i=0;i<t;i++){
      if(x==s[i]){
          r=i;
          break;
      }
        }
  int i;
       for( i=t-1;i>=0;i--){
      if(y==s[i]){
          m=t-1-i;
         
         
          break;
            }
    
     }
     
if(r>i){
  cout<<r+m-1;
}else{
    cout<<r+m;
}

}

    return 0;
}