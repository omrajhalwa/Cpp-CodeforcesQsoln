#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int max=1,k=1;
for(int i=0;i<n-1;i++){

if(v[i]<=v[i+1]){
    k++; if(k>max){
        max=k;
    }
}else{
    
    k=1;
}




}

cout<<max<<endl;


}