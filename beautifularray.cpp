#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){


long long int n,k,b,s;
cin>>n>>k>>b>>s;
vector<long long int>v;
long long int total=s;
long long int c,lk,p=n;
lk=k*b;
c=s-((n-1)*(k-1));
long long int maxe=k*(b+1)-1;
if(maxe>=c&&lk<=s){
while(total||p>0){

if(total>=maxe&&p==n){
v.push_back(maxe);
p--;
total=total-maxe;
}else if(total<maxe&&p==n){
v.push_back(total);
p--;
total=0;
}else if(k-1<=total){
    v.push_back(k-1);
    p--;
    total=total-(k-1);
}else if(total<k-1){
    v.push_back(total);
    p--;
    total=0;
}


}

sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;


}else{
    cout<<-1<<endl;
}


}
}