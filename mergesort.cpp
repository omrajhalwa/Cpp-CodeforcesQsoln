#include<bits/stdc++.h>
using namespace std;
#define int long long


void merge(int *a,int l,int h){
  

    int i,j,k;
    vector<int>b(h++);
    i=l,j=mid+1,k=l;
    while(i<=mid&&j<=h){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }else{
            b[k++]=a[j++];
        }
    }
    for(;i<=mid;i++){
        b[k++]=a[i];
    }for(;j<=h;j++){
        b[k++]=a[j];
    }
    for(int l;l<=h;l++){
        a[l]=b[l];
    }
    
}

void mergesort(int start,int end,int *a){

if(end==start){
    return;
}

  int  mid=(start+end)/2;
    mergesort(start,mid,a);
    mergesort(mid+1,end,a);
    merge(a,start,end);
}

signed main(){

vector<int>v;
v.push_back(5);
v.push_back(4);
v.push_back(1);
v.push_back(2);
v.push_back(1);
mergesort(0,4,v);
for(auto it:v){cout<<it<<" ";}




}