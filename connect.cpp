#include<bits/stdc++.h>
using namespace std;
#define int long long


int fun(int ind1,int ind2,int x,int y,vector<string>v,int cnt,int tar1,int tar2,int n){


if(ind1==tar1&&ind2==tar2) return 0;
if(ind1<0||ind2<0||ind1>n-1||ind2>n-1) return 1e9;

int a=0,ans=0,p1=x,p2=y;
if(cnt==0&&v[ind1][ind2]=='0'){p1=ind1;p2=ind2;}
if(v[ind1][ind2]=='1'){a=1;}

if(cnt==1&&v[ind1][ind2]=='0'){
    ans=(ind1-x)*(ind1-x)+(ind2-y)*(ind2-y);
}
int up=fun(ind1-1,ind2,p1,p2,v,a,tar1,tar2,n);

int left=fun(ind1,ind2-1,p1,p2,v,a,tar1,tar2,n);

cout<<ans+min(up,left)<<" "<<ind1<<" "<<ind2<<endl;

return ans+min(up,left);
}





signed main(){


int n;cin>>n;
int starti,startj,endi,endj;
cin>>starti>>startj;
cin>>endi>>endj;
vector<string>v(n);
for(int i=0;i<n;i++){
    string s="";
     cin>>s;
 v[i]=s;
    
}

cout<<fun(endi-1,endj-1,endi-1,endj-1,v,0,starti-1,startj-1,n);


}