#include<bits/stdc++.h>
using namespace std;
#define int long long
//Hmm

bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second < b.second);
}bool sortbydec(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second < b.second);
}
signed main(){

int t;
cin>>t;
while(t--){
string s="";
cin>>s;
vector<pair<int,int>>v;
for(int i=0;i<s.size();i++){
    v.push_back(make_pair((s[i]-'a'+1),i+1));
}

sort(v.begin(),v.end(),sortbyCond);
if(s[0]-'a'>s[s.size()-1]-'a'){
    sort(v.begin(),v.end(),sortbydec);
}
int p,q;

for(int i=0;i<s.size();i++){
if(v[i].first==(s[0]-'a'+1)){
    p=i;break;
}
}for(int i=s.size()-1;i>=0;i--){
if(v[i].first==s[s.size()-1]-'a'+1){
    q=i;break;
}
}
int sum=0,len=0,mx,mn;
mx=q;
mn=p;
for(int i=mn+1;i<=mx;i++){
    sum+=abs(v[i].first-v[i-1].first);len++;
}
cout<<sum<<" "<<len+1<<endl;

for(int i=mn;i<=mx;i++){
    cout<<v[i].second<<" ";

}
cout<<endl;
}

}