#include<bits/stdc++.h>
using namespace std;

int main(){

array<int,6>arr={2,4,6,5,8,9};
int *p=arr.begin();
cout<<*p<<" "<<*(p+3)<<endl;

cout<<*(arr.end()-1)<<endl;
cout<<*(arr.rbegin())<<endl;
int *o=arr.begin();
cout<<o<<endl;
vector<int>v(4,1);
vector<int>a(4,1);

auto it=unique(v.begin(),v.end());
cout<<it;





}