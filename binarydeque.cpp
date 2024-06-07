#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
int t;cin>>t;
while(t--){
int n,s;
cin>>n>>s;int one=0;
vector<int>v(n);vector<int>fro,back;
for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]==1){
        one++;
        fro.push_back(i+1);
    }
}
reverse(v.begin(),v.end());
for(int i=0;i<n;i++){

    if(v[i]==1){
        back.push_back(i+1);
    }
}

if(one<s){
    cout<<-1<<endl;
}else if(one==s){
    cout<<0<<endl;
}else{

int a=0,b=0,ans=0;
int i=0,j=0;
while(one!=s){

if(fro[i]-a<back[j]-b&&i<(n+2-1)/2){
   
    ans+=fro[i]-a; a=fro[i];
    i++;one--;
}else {
   //last attempt
    ans+=back[j]-b;   b=back[j];
    j++;one--;
}




}
cout<<ans<<endl;
}


}

}