#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
long long int n,k;
cin>>n>>k;
long long int s[100001];
for(int i=n-k+1;i<=n;i++){

    cin>>s[i];
}


vector<long long>a(n+1);
for(int i=n-k+2;i<=n;i++){
a[i]=s[i]-s[i-1];

}
if(k==1){
    cout<<"Yes"<<endl;
}else if(!is_sorted(a.begin()+n-k+2,a.end())){
    cout<<"No"<<endl;
}else if(s[n-k+1]>a[n-k+2]*(n-k+1)){
    cout<<"No"<<endl;
}else{
    cout<<"Yes"<<endl;
}


}









}

