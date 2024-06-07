#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,y;cin>>n>>y;
vector<int>v(n);
vector<int>c;
for(int &x:v){
    cin>>x;
    c.push_back(x);
}
--n;
sort(c.begin(),c.end());
bool give=true;
if(y-(n-y)<2){

}else{
    for(int i=n-y+1;i<y;i++){
        if(c[i]==v[i]){

        }else{
            give=false;
        }
    }
}




if(is_sorted(v.begin(),v.end())||give){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


}

}