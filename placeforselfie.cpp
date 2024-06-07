#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int n,m;
cin>>n>>m;
vector<int>v(n);
for(int &x:v){
    cin>>x;
}


vector<int>p;

for(int i=0;i<m;i++){
int a,b,c;cin>>a>>b>>c;
int start=b,end=b-sqrt(4*a*c);int ans=0;
while(start<=end){

int mid=start+(end-start)/2;

if((b-mid)*(b-mid)-4*a*c<0){
    ans=mid;
   start=mid+1;
}else{
    end=mid-1;
}


}


}


}