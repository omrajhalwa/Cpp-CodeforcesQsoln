#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
 int t;cin>>t;
 while(t--){
int n=10;

vector<string>v;

for(int i=0;i<10;i++){
    string s="";
    cin>>s;
    v.push_back(s);
}
int ans=0;
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(v[i][j]=='X'){
            if(i==0||j==0||i==9||j==9){
                ans+=1;
            }else if(i==1||j==1||i==8||j==8){
               ans+=2;
            }else if(i==2||j==2||i==7||j==7){
                 ans+=3;
            }else if(i==3||j==3||i==6||j==6){
                   ans+=4;
            }else if(i==4||j==4||i==5||j==5){
                ans+=5;
            }
        }
    }
}

cout<<ans<<endl;
}

}