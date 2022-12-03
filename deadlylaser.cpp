#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,m,s1,s2,d,mn,mx;
cin>>n>>m>>s1>>s2>>d;

mn=min(n-s1,s2-1);
mx=min(m-s2,s1-1);
if(s2-1>d&&n-s1>d){
    cout<<n-1+m-1<<endl;
}else if(s1-1>d&&m-s2>d){
     cout<<n-1+m-1<<endl;
    }else{
    cout<<-1<<endl;
}




}







}