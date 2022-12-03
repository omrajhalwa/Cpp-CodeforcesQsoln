#include<bits/stdc++.h>
using namespace std;

signed main(){
int t;
cin>>t;
while(t--){
 long long int n,p=1,sum=2;
cin>>n;
 long long y=1,c=0,r=0;
vector< long long int>v;
vector< long long int>a(1000001);
for(int i=1;i<=n;i++){
     cin>>y;
   a.push_back(y);
   p=p*y;
    if(p%2==0){
        p=p/2;
        c++;
    }
   if(i==sum){r++;
    v.push_back(r);
      sum=sum*2;}
}

 long long l,k=0,q=0;
l=pow(2,n);
if(c>=n){
    cout<<0<<endl;q++;
}else{
for(int i=v.size()-1;i>=0;i--){
    c=c+v[i];k++;
    
if(c>=n){
  cout<<k<<endl; 
  q++; 
  break;
}

}


}

if(q==0){
    cout<<-1<<endl;
}
}






return 0;
}