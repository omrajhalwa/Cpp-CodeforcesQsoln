#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
int n;
cin>>n;
int ab=0,ba=0,a[1001];
for(int j=0;j<n;j++){
    
    cin>>a[j];
if(a[j]==1){
    ab++;
}
}
int p=0,b[1010];
for(int j=0;j<n;j++){
    cin>>b[j];
    if(b[j]==1){
        ba++;
    }
    if(a[j]!=b[j]){
        p++;
    }
}

int c=abs(ab-ba);
int ans=0;
if(p==0){
    cout<<0<<endl;
}else if(c==p){
    cout<<p<<endl;
}else if(c==0&&p>0){
    cout<<1<<endl;
}


}




}