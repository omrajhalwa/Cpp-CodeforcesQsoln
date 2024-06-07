#include<bits/stdc++.h>
using namespace std;

#define int long long






signed main(){
    int t;cin>>t;
    while(t--){
int n,q;cin>>n>>q;
set<int>st;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]>9){st.insert(i);}
}

auto val=[&](int x){

int sum=0;
while(x){
    int r=x%10;
    sum+=r;
    x/=10;
}
return sum;

};





while(q--){

int x;cin>>x;
if(x==1){
int l,r;
cin>>l>>r;
l--;r--;
int a=l;
while(!st.empty()){

auto it=st.lower_bound(a);

if(it==st.end()||*it>r) break;

v[*it]=val(v[*it]);
a=*it+1;
if(v[*it]<=9){st.erase(it);}





}





}else{
int x;
cin>>x;
x--;
cout<<v[x]<<endl;



}






}

    }

}