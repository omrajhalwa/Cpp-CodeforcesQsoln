#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,k,x;
cin>>n>>k>>x;

if(k>x+1){
    cout<<-1<<endl;
}else if(n<k){
    cout<<-1<<endl;
}else{
    int ans=0;int i=0;
    while(i<k){
        ans+=i;i++;n--;
    }while(n--){
        if(k==x){
            x--;
        }
        ans+=x;
    }

    cout<<ans<<endl;
}

}


}