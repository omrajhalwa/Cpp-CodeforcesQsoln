#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    

int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v;
vector<int>v1(n+2,0);
vector<int>one;
vector<int>zero;
for(int i=0;i<n;i++){
    int a;cin>>a;
    v.push_back(a); 
}

string s;
cin>>s;
for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        one.push_back(v[i]);
    }else{
        zero.push_back(v[i]);
    }
}
sort(one.begin(),one.end());
sort(zero.begin(),zero.end());
int j=0;
for(int i=0;i<zero.size()&&j<n;i++,j++){
   v1[zero[i]]=j+1;
}
for(int i=0;i<one.size()&&j<n;i++,j++){
    v1[one[i]]=j+1;
}

for(int i=0;i<v.size();i++){
    cout<<v1[v[i]]<<" ";

}
cout<<endl;


}
}