
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
int n,k,r,c,o=0,p=0,l=0;
cin>>n>>k>>r>>c;


char a[501][501];
for(int i=0;i<=500;i++){

for(int j=0;j<=500;j++){
    a[i][j]='.';
}}
if(r-c>=0){
    o=r-c;
    l=o;
while(o<=500){
    a[o][p]='X';
    o=o+k;
}
o=l;
while(o>0){
    a[o][p]='X';
 o=o-k;}

p=abs(o);
o=0;
    while(p<=500){
    
    
     a[o][p]='X';
     p=p+k;
    }





}else{
    p=c-r;
     
    l=p;
while(p<=500){
    a[o][p]='X';
    p=p+k;
}
p=l;
while(p>0){
    a[o][p]='X';
 p=p-k;}

o=abs(p);
p=0;
    while(o<=500){
    
    
     a[o][p]='X';
     o=o+k;
    }




   
}












for(int i=1;i<=n;i++){

for(int j=1;j<=n;j++){
   
    if(a[i-1][j-1]=='X'){
        a[i][j]='X';
    }else{
        a[i][j]='.';
        
    }
}


}
for(int i=1;i<=n;i++){

for(int j=1;j<=n;j++){
    cout<<a[i][j];
}
cout<<endl;

}
    


    }

}


