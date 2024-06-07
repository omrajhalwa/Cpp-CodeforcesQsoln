#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
vector<int>c(n+1);int mx=1,mn;
for(int i=0;i<n;i++){
    cin>>v[i];
    c[i+1]=v[i];
    
}
sort(v.begin(),v.end());
mn=0;
int var=0;
for(int i=1;i<=n;i++){
    if(c[i]==mn){
        if(i<=n/2)
        {
          var+=i*(n+1-i);
        
        }else{
          var+=(n-i+1)*(n+1-(n-i+1));
        }
    }
}




int a=0,b=0,c1=0,k=n;
for(int i=1;i<=n;i++,k--){
    a+=k*i;
    

}
b=(a-var)*mn;
c1=var*mx;

cout<<a+b+c1<<endl;
}
}