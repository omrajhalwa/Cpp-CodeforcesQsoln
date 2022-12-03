#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){

int a[]={6,4,5,5,7,25,8};
vector<int>v(a,a+7);
sort(v.begin(),v.end());
int n=7;
sort(a,a+n);
int *ptr=upper_bound(a,a+n,1);
int it=upper_bound(v.begin(),v.end(),25)-v.end();
int itt=lower_bound(v.begin(),v.end(),25)-v.begin();
set<int>s(a,a+n);
//auto itt=s.upper_bound(7);
cout<<it<<endl;
}