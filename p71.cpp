
#include<bits/stdc++.h>
using namespace std;




int main(){
    int n,m,a,k(0),l(0),x(0),y(0),z(0);
     scanf("%d%d", &n, &m);
    
    
    while(n--){
        cin>>a;
        if(a==1){
          x++;
        }
        if(a==-1){
          y++;
        }
        
        
    }
    z=min(x,y);
    
    
    while(m--){
     scanf("%d%d", &k, &l);
    if((l-k+1)%2==0&&l-k+1<=z*2){
      printf("%d\n",1);
    }else{
      printf("%d\n",0);
    }
    
    }

    
}

