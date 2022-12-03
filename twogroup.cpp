#include<bits/stdc++.h>
using namespace std;

int main(){
long long int t;
cin>>t;
while(t--){
long long int n,p=0,m=0;
cin>>n;
long long int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>0){
        p+=a[i];
    }else{
        m+=a[i];
    }
}
long long int ma,mi;
p=abs(p);
m=abs(m);
ma=(max(p,m));
mi=(min(p,m));
cout<<ma-mi<<endl;


}





}