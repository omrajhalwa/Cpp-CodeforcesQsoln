#include<bits/stdc++.h>
using namespace std;

//variable size sliding window longest subarray of sum k

int main(){


int n,k;
cin>>n;
cin>>k;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

int i=0,j=0,sum=0,mx=0;
while(j<v.size()){
sum+=v[j];
if(sum<k){
j++;
}else if(sum==k){
    //cout<<j-i+1<<endl;
    mx=max(mx,j-i+1);
    
sum-=v[i];
i++;
j++;

}else{
    sum-=v[i];
    i++;
    j++;
}




}

cout<<mx<<endl;
    
}