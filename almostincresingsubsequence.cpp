#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

int n,q;
cin>>n>>q;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<int>p;
vector<int>c;
if(n>2){
for(int i=0;i<n-2;i++){
if(v[i]>=v[i+1]&&v[i+1]>=v[i+2]){
p.push_back(i+1);
c.push_back(i+3);
}
}
}

while(q--){
int a,b;
cin>>a>>b;

int start=0,end=p.size()-1,ans1=-1,ans2=-1;
if(p.size()>0){
while(start<=end){

int mid=start+(end-start)/2;
if(a<=p[mid]){
    ans1=mid+1;
    end=mid-1;
}else{
    start=mid+1;
}


}
start=0,end=c.size()-1;
while(start<=end){

int mid=start+(end-start)/2;
if(b>=c[mid]){
    ans2=mid+1;
    start=mid+1;
}else{
    end=mid-1;
}


}
}


if(abs(a-b)<2||ans1>ans2){
    cout<<b-a+1<<endl;
}
else if(ans1==-1||ans2==-1){
    cout<<b-a+1<<endl;
}
else{
    cout<<b-a+1-abs(ans1-ans2)-1<<endl;
}


}

}