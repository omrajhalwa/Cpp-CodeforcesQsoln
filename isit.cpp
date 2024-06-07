#include<bits/stdc++.h>
using namespace std;

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
string s="";
cin>>s;
bool give=true;
if(s[0]=='m'||s[0]=='M'){

}else{
    //cout<<1<<endl;
    give=false;
}int p=0;
for(int i=0;i<n;i++){
    if((s[i]=='m'||s[i]=='M')&&p==0){
        p++;
    }else if((s[i]=='e'||s[i]=='E')&&p==1){
      p++;
    }else if((s[i]=='o'||s[i]=='O')&&p==2){
        p++;
    }else if((s[i]=='w'||s[i]=='W')&&p==3){
        p++;
    }
}
for(int i=0;i<n-1;i++){
    if(s[i]=='m'||s[i]=='M'){
        if(s[i+1]=='m'||s[i+1]=='M'||s[i+1]=='e'||s[i+1]=='E'){
            }else{give=false;;
            break;
        }
    }else if(s[i]=='e'||s[i]=='E'){
        if(s[i+1]=='e'||s[i+1]=='E'||s[i+1]=='o'||s[i+1]=='O'){
        }else{give=false;
            break;
        }
    }else if(s[i]=='o'||s[i]=='O'){
        if(s[i+1]=='o'||s[i+1]=='O'||s[i+1]=='w'||s[i+1]=='W'){
        }else{give=false;
            break;
        }
    }else if(s[i]=='w'||s[i]=='W'){
        if(s[i+1]=='W'||s[i+1]=='w'){
        }else{give=false;
            break;
        }
    }
}


if(give&&p>3){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}

}

}