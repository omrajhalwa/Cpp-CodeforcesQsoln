#include<bits/stdc++.h>
using namespace std;

int main(){
long long int t;
cin>>t;
while(t--){

long long int n;
cin>>n;
long long int a[n],b[n],c[n],d[n],k=0,p=0;
for(int i=0;i<n;i++){
    cin>>a[i];
}for(int i=0;i<n;i++){
    cin>>b[i];
    if(a[i]==0){
        c[k]=b[i];
        k++;
    }else{
        d[p]=b[i];
        p++;
    }
}

sort(c,c+k);
sort(d,d+p);
long long int r=min(k,p);
if(k==p){
    for(int i=k-1;i>0;i--){
        c[i]=2*c[i];
        d[i]=2*d[i];
    }
    if(c[0]>d[0]){
        c[0]=2*c[0];
    }else{
        d[0]=2*d[0];
    }
}else {
    long long int o=r;
    for(int i=k-1;r>0;r--,i--){
        c[i]=2*c[i];
    }for(int i=p-1;o>0;o--,i--){
        d[i]=2*d[i];
    }
}

long long int sum=0; 
for(int i=0;i<k;i++){
    sum+=c[i];
}for(int i=0;i<p;i++){
    sum+=d[i];
}


cout<<sum<<endl;

}
}







