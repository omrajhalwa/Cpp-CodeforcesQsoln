#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
reverse(v.begin(),v.end());

if(v[0]==n||v[n-1]==n){

    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;
}else{
    cout<<-1<<endl;
}


}

}