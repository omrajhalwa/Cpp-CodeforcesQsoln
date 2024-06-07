#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,3,4,2};
stack<int>s;
for(int i=sizeof(a)-1;i>=0;i--){

while(!s.empty()||a[i]>s.top()){
    s.pop();
}
if(a[i]>s.top()){
    v.push_back(s.top());
    s.push(a[i]);
}



}






}