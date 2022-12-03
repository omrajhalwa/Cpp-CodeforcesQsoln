#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
 
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        string ans="";
        for(auto c:s)
        {
            mp[c]++;
            
        }
        vector<int>v(27);
        for(auto it:mp)
        {
 
            v[it.first-'a']=it.second;
        }
        int f=k;
        while(f--)
        {
            bool tell=true;
            int i=0,j=0;
            while(i<n/k)
            {
 
                if(v[i]==0)
                {
                    tell=false;
                    break;
                }
                v[i]--;
                i++;
                j++;
            }
            if(tell)
            {
                ans+='a'+n/k;
            }
            else
            {
                ans+='a'+j;
            }
 
        }
        cout<<ans<<endl;
    }
 
 
}