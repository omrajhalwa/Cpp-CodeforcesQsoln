#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
//kya hi sochra hai bhai doghante se

int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);

vector<int>odd;
vector<int>even;
for(int i=0;i<n;i++){
    cin>>v[i];
     if(v[i]%2==0){
        even.push_back(v[i]);
     }else{
        odd.push_back(v[i]);
     }
}
bool give=true;
if(is_sorted(even.begin(),even.end())&&is_sorted(odd.begin(),odd.end())){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


}

}


