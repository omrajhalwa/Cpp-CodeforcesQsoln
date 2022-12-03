#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
vector<pair<int,int>>vec;
string s;
cin>>s;
int a[s.size()],b[s.size()];
for(int i=0;i<s.size();i++){

if(s[i]=='a'){
a[i]=1;
b[i]=1;
}else if(s[i]=='b'){
a[i]=2;
b[i]=2;
}else if(s[i]=='c'){
    a[i]=3;
b[i]=3;
}else if(s[i]=='d'){
a[i]=4;
b[i]=4;
}else if(s[i]=='e'){
a[i]=5;
b[i]=5;
}else if(s[i]=='f'){
    a[i]=6;
b[i]=6;
}else if(s[i]=='g'){
    a[i]=7;
b[i]=7;
}else if(s[i]=='g'){
    a[i]=8;
b[i]=8;
}else if(s[i]=='i'){
    a[i]=9;
b[i]=9;
}else if(s[i]=='j'){
    a[i]=10;
b[i]=10;
}else if(s[i]=='k'){
    a[i]=11;
b[i]=11;
}else if(s[i]=='l'){
    a[i]=12;
b[i]=12;
}else if(s[i]=='m'){
    a[i]=13;
b[i]=13;
}else if(s[i]=='n'){
    a[i]=14;
b[i]=14;
}else if(s[i]=='o'){
    a[i]=15;
b[i]=15;
}else if(s[i]=='p'){
    a[i]=16;
b[i]=16;
}else if(s[i]=='q'){
    a[i]=17;
b[i]=17;
}else if(s[i]=='r'){
    a[i]=18;
b[i]=18;
}else if(s[i]=='s'){
    a[i]=19;
b[i]=19;
}else if(s[i]=='t'){
    a[i]=20;
b[i]=20;
}else if(s[i]=='u'){
    a[i]=21;
b[i]=21;
}else if(s[i]=='v'){
    a[i]=22;
b[i]=22;
}else if(s[i]=='w'){
    a[i]=23;
b[i]=23;
}else if(s[i]=='x'){
    a[i]=24;
b[i]=24;
}else if(s[i]=='y'){
    a[i]=25;
b[i]=25;
}else if(s[i]=='z'){
    a[i]=26;
b[i]=26;
}


vec.emplace_back(a[i],i);




}

sort(a,a+s.size());
sort(vec.begin(),vec.end());











int p=0,k=0;
if(b[0]<b[s.size()-1]){
for(int i=0;i<s.size()-1;i++){
    if(a[i]>=b[0]){
p=p+(a[i+1]-a[i]);

k++;}

}


}else{

for(int i=s.size()-1;i>0;i--){
if(a[i]<=b[0]){
p+=(a[i]-a[i-1]);k++;}

}

}

cout<<p<<" "<<k+1<<endl;
if(b[0]<=b[s.size()-1]){

for(int i=0;i<vec.size();i++){
    if(vec[i].first<b[0]){
            i++;
        }
    cout<<vec[i].second+1<<" ";
}cout<<endl;

}else{

    for(int i=s.size()-1;i>=0;i--){
        if(vec[i].first>b[0]){
            i--;
        }
         cout<<vec[i].second+1<<" ";

    }cout<<endl;
}

}



}









