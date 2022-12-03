#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
double k=accumulate(a,a+n,0);
cout<<fixed<<setprecision(12);
cout<<k/n;


}