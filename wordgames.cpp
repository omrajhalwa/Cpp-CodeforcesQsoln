#include<bits/stdc++.h>
using namespace std;

int main(){int t;
cin>>t;
    while(t--){
        int n;
        cin>>n;

map<string,int>mp;
vector<string>v;
for(int i=0;i<n;i++){
    string s="";
cin>>s;
v.push_back(s);
mp[s]++;

}


for(int i=0;i<3;i++){
    int sum=0;
for(int j=n*i;j<n*i+n;j++){
if(mp[v[j]]==1){
    sum+=3;
}if(mp[v[j]]==2){
    sum+=1;
}else{
    sum+=0;
}


}
cout<<sum<<" ";
}



    }
}