#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
for(int i=0;i<t;i++){
	    int n;
	    int a[1000000];
	    cin>>n;
	    
	    for(int k=0;k<n;k++){
	         cin>>a[k];
	   
	}map<int,int>mp;
	for(int j=0;j<n;j++){
	    mp[a[j]]++;
	}int p=0,c=0;
    for(int j=0;j<n;j++){
        int b;
        if(mp[a[j]]==1){
            mp[a[j]]=0;
        }if(mp[a[j]]>1){
            b=mp[a[j]]/2;
            if(p<b){
             p=b;
            }
            mp[a[j]]=mp[a[j]]%2;
            c+=mp[a[j]];
        }
    }
	cout<<p+c<<endl;
	}
	return 0;
}