#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;

vector<int>v(n+1);

for(int i=0;i<n;i++){
    v[i]=i+1;
}
cout<<n<<endl;
for(int k=0;k<n;k++){
    cout<<v[k]<<" ";
} cout<<endl;
int x;
for(int i=0;i<n-1;i++){
     
    
    swap(v[n-1-i],v[n-2-i]);

    


for(int k=0;k<n;k++){
    cout<<v[k]<<" ";
} cout<<endl;

}

    }

}