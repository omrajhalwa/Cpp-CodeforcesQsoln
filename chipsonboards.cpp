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
vector<int>c(n);
int sum1=0,sum2=0;int mn1=INT_MAX, mn2=INT_MAX;
for(int &x:v){cin>>x;sum1+=x;mn1=min(mn1,x);}
for(int &y:c){cin>>y;sum2+=y;mn2=min(mn2,y);}

cout<<min(n*mn2+sum1,n*mn1+sum2)<<endl;

}
}