// C++ program to print all prime factors
#include <bits/stdc++.h>
using namespace std;
#define int long long
// prime factor has to be practice.....
vector<int> primeFactors(int n)
{


    vector<int>v;
	
	while (n % 2 == 0)
	{
		v.push_back(2);
		n = n/2;
	}

	
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
	
		while (n % i == 0)
		{
	    v.push_back(i);
			n = n/i;
		}
	}


	if (n > 2)
		v.push_back(n);



        return v;
}


signed main()
{

	int t;
	cin>>t;
	while(t--){
	int n ;cin>>n;
    vector<int>v;
	v=primeFactors(n);
map<int,int>mp;
map<int,int>m;
    for(auto it:v){
		mp[it]++;
		if(m[mp[it]]==0){
			m[mp[it]]=1;
			m[mp[it]]*=it;
		}else{
			m[mp[it]]*=it;
		}
	}
int sum=0;
for(auto i:m){
	sum+=i.second;
}
cout<<sum<<endl;


	}
	


}


