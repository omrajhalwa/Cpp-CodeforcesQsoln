
#include<bits/stdc++.h>
using namespace std;

signed main(){

    int t;cin>>t;while(t--){
int n;cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());

bool give=true;

while(v.size()!=2&&give){
    n=v.size();
int start=0,end=n-1;
while(start<=end){

int mid=start+(end-start)/2;
if(v[mid]==v[n-1]-v[n-2]){
    break;
}else if(v[mid]<v[n-1]-v[n-2]){
    start=mid+1;
}else{
    end=mid-1;
}
}
if(start>end){
    //cout<<v.size();
    give=false;
}else{

int left=0,right=n-3;
while(left<=right){
    int mid=left+(right-left)/2;
    if(v[mid]==v[n-2]-(v[n-1]-v[n-2])){
        v[mid]=v[n-1];
        sort(v.begin(),v.end());
        v.pop_back();
        v.pop_back();break;
    }else if(v[mid]<v[n-2]-(v[n-1]-v[n-2])){
        left=mid+1;
    }else{
        right=mid-1;
    }
}
if(left>right){
   give=false;
}

}

}

if(give){
    cout<<"YES"<<endl;
    swap(v[0],v[1]);
    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}