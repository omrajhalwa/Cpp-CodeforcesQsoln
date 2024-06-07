#include<bits/stdc++.h>
using namespace std;
#define int long long




int f(vector<int>&arr,int ind,int target){


if(ind==0){

    if(target==1||target==-1){
        return 1;
    }
    return 0;
}


    int plus=0;
    int minus=0;

    plus=f(arr,ind-1,target-1);
    minus=f(arr,ind-1,target+1);

  return plus+minus;
}




signed main(){


vector<int>arr={1,1,1,1,1};
int n=5,target=3;
cout<<f(arr,n-1,target);

}