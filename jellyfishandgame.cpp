#include<bits/stdc++.h>
using namespace std;
#define int long long
// jai shree ram......
// jai bajrangbali....

void fun(int ind,vector<int>&v,vector<int>&c,int n,int m,int l){

if(ind>l){
    return ;
}

if(c[m-1]>v[0]&&ind%2==1){
    swap(c[m-1],v[0]);
}

if(c[0]<v[n-1]&&ind%2==0){
     swap(c[0],v[n-1]);
}

sort(v.begin(),v.end());
sort(c.begin(),c.end());
fun(ind+1,v,c,n,m,l);
}



signed main(){
int t;
cin>>t;
while(t--){
int n,m,k;
cin>>n>>m>>k;
vector<int>v(n);
vector<int>c(m);
int sum1=0;
for(int i=0;i<n;i++){
    cin>>v[i];
  
     
}
for(int i=0;i<m;i++){
    cin>>c[i];
  
    
}
int l;
sort(v.begin(),v.end());
sort(c.begin(),c.end());

if(k%2==0){
    if(k>50){
        l=50;
    }else{
        l=k;
    }
}else{
     if(k>51){
        l=51;
    }else{
        l=k;
    }
}

fun(1,v,c,n,m,l);

for(int i=0;i<n;i++){sum1+=v[i];}
cout<<sum1<<endl;

}







	
}