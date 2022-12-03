#include<bits/stdc++.h>
using namespace std;

int main(){

pair<int,int>p[101];
int n,k=0,l=0,a=0,b=0;
cin>>n;
for(int i=1;i<=n;i++){
    
    cin>>p[i].first>>p[i].second;
    if(p[i].first%2==0&&p[i].second%2!=0){
       k=i;
    }if(p[i].first%2!=0&&p[i].second%2==0){
       l=i;
    }
   a+=p[i].first;
   b+=p[i].second;
}


if(a%2==0&&b%2==0){
    cout<<0;
}else if(a%2!=0&&b%2!=0&&(k>0||l>0)){
    cout<<1;
}else{
    cout<<-1;
}

}