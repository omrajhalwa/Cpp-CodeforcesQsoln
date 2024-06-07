#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){


int n;cin>>n;
int sum=0;
int start=0,end=1000000000000000000;

while(start<=end){
    int mid=start+(end-start)/2;
    sum=4*i+1;
if(n<=sum){
    cout<<i<<endl;
    break;
}else if(n<=sum+3){
    cout<<i+1<<endl;
    break;
}
}
}

}