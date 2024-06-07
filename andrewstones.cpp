#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;cin>>t;
    while(t--){
int n;
cin>>n;
vector<int>v(n);
int even=0,odd=0,one=0;
for(int i=0;i<n;i++){
    cin>>v[i];
    if(i>0&&i<n-1){
        if(v[i]==1){one++;}
        if(v[i]%2==0){even++;}
        else{odd++;}
    }
}
if((even==0&&n==3)||one==n-2){
    cout<<-1<<endl;
}else{
    int ans=0;
for(int i=1;i<n-1;i++){
if(v[i]%2==0){
    ans+=v[i]/2;
}else{
    ans+=v[i]/2+1;
}
}
cout<<ans<<endl;


}


}

}