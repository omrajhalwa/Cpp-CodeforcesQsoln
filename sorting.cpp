#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b){
int i=0;
if(a[i]==b[i]){
    i++;
if(i%2==0){
    return false;
}return true;

}

}


signed main(){

    vector<string>v;
    v.push_back("aa");
    v.push_back("ab");
    v.push_back("bb");
    v.push_back("ba");
    v.push_back("az");
    

    
    sort(v.begin(),v.end());
for(auto it:v){
    cout<<it<<" ";
}
}