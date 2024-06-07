#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

deque<int>dq;
int a=0;
for(int i=0;i<user_input.size();i++){
    if(user_input[i]>='0'&&user_input[i]<='9'){
       a=a*10+(user_input[i]-'0');
    }
}
if(user_input[0]=='P'&&user_input[1]=='U'){
dq.push_back(a);
}else if(user_input[0]=='P'&&user_input[1]=='O'){
    if(dq.size()==0){
        cout<<"EMPTY"<<" ";
    }else{
        cout<<dq.back()<<" ";
    dq.pop_back();
    }
}else if(user_input[0]=='E'&&user_input[1]=='J'){
    
dq.pop_front();

}else if(user_input[0]=='I'&&user_input[1]=='N'){
    dq.push_front(a);
}



}