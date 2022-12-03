#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>v;
int y,k,n,x,l,g=0;
cin>>y>>k>>n;
l=(n/k)*k;
int i=k;
while(i<=l){
if(i-y>0&&i-y<=l){
x=i-y;
g++;
cout<<x<<" ";}
i=i+k;


}
if(g==0){
    cout<<-1;
}

}