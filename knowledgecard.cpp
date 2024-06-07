#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){
int n,m,k;
cin>>n>>m>>k;
vector<int>v(k);
for(int &x:v){
    cin>>x;
}
int buc=n*m-4;
set<int,greater<int>>st;
bool give=true;

int rev=k;
for(int i=0;i<k;i++){
st.insert(v[i]);

while(!st.empty()&&rev==*(st.begin())&&rev>0){
st.erase(st.begin());
rev--;
}


    if(st.size()>buc){
      //  cout<<st.size()<<" "<<buc<<endl;
        give=false;
        break;
    }

}


if(give){
    cout<<"YA"<<endl;
}else{
    cout<<"TIDAK"<<endl;
}
}

}