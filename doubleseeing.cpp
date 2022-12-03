#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
    cin>>t;
    while(t--){
string s;
cin>>s;
vector<char>v;
for(int i=0;i<s.size();i++){
v.push_back(s[i]);

}

for(int i=0;i<v.size();i++){
    cout<<v[i];
}for(int i=v.size()-1;i>=0;i--){
    cout<<v[i];
}
cout<<endl;


    }










}