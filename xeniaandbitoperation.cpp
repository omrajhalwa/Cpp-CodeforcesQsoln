#include<bits/stdc++.h>
using namespace std;
#define int long long


class SGTree{

    public:
    vector<int>seg;
    SGTree(int n){
       seg.resize(4*n+1);
    }
void build(int ind,int low,int high,int arr[],int alt){
    if(low==high){
        seg[ind]=arr[low];
        return ;
    }

    int mid=(low+high)/2;
    build(2*ind+1,low,mid,arr,alt+1);
    build(2*ind+2,mid+1,high,arr,alt+1);
    if(alt%2==0)seg[ind]=(seg[2*ind+1]^seg[2*ind+2]);
    else seg[ind]=(seg[2*ind+1]|seg[2*ind+2]);

}

int query(int ind,int low,int high,int l,int r){

    if(r<low||high<l) return INT_MAX;

    if(low>=l&&high<=r) return seg[ind];

    int mid=(low+high)>>1;
    int left=query(2*ind+1,low,mid,l,r);
    int right=query(2*ind+2,mid+1,high,l,r);
    return min(left,right);
}

void update(int ind,int low,int high,int i,int val,int alt){
    if(low==high){
        seg[ind]=val;
        return ;
    }
    int mid=(low+high)>>1;
    if(i<=mid) update(2*ind+1,low,mid,i,val,alt+1);
    else update(2*ind+2,mid+1,high,i,val,alt+1);
     if(alt%2==0)seg[ind]=(seg[2*ind+1]^seg[2*ind+2]);
    else seg[ind]=(seg[2*ind+1]|seg[2*ind+2]);
}


};
signed main(){
    int n;
    cin>>n;
    int num=n;
    int q;
       cin>>q;
       n=(1<<n);
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    SGTree sg1(n);
    sg1.build(0,0,n-1,arr,num);


 
while(q--){
 
     int l,r;
     cin>>l>>r;
   
    
     sg1.update(0,0,n-1,l-1,r,num);
     arr[l-1]=r;
    
  cout<<sg1.seg[0]<<endl;
    
}
   
}