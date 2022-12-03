#include<iostream>
using namespace std;

int main(){
    
    int t;
     string s;
    cin>>t;
    for(int j=0;j<t;j++){
    int n;
    cin>>n;
    cin>>s;
    int i=0;
    while(i<n){
        
        if((s[i]=='1'&&s[i+2]!='0')||s[i]=='1'&&s[i+2]=='0'&&s[i+3]=='0'){
            cout<<'a';
        }else if((s[i]=='2'&&s[i+2]!='0')||s[i]=='2'&&s[i+2]=='0'&&s[i+3]=='0'){
            cout<<'b';
        }else if((s[i]=='3'&&s[i+2]!='0')||s[i]=='3'&&s[i+2]=='0'&&s[i+3]=='0'){
            cout<<'c';
        }else if((s[i]=='4'&&s[i+2]!='0')||s[i]=='4'&&s[i+2]=='0'&&s[i+3]=='0'){
            cout<<'d';
        }else if((s[i]=='5'&&s[i+2]!='0')||s[i]=='5'&&s[i+2]=='0'&&s[i+3]=='0'){
            cout<<'e';
        }else if((s[i]=='6'&&s[i+2]!='0')||s[i]=='6'&&s[i+2]=='0'&&s[i+3]=='0'){
            cout<<'f';
        }else if((s[i]=='7'&&s[i+2]!='0')||s[i]=='7'&&s[i+2]=='0'&&s[i+3]=='0'){
            cout<<'g';
        }else if((s[i]=='8'&&s[i+2]!='0')||s[i]=='8'&&s[i+2]=='0'&&s[i+3]=='0'){
            cout<<'h';
        }else if((s[i]=='9'&&s[i+2]!='0')||s[i]=='9'&&s[i+2]=='0'&&s[i+3]=='0'){
            cout<<'i';
        }else if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
            cout<<'j';
            i=i+2;
        }else if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'){
            cout<<'k'; i=i+2;
        }else if(s[i]=='1'&&s[i+1]=='2'&&s[i+2]=='0'){
            cout<<'l'; i=i+2;
        }else if(s[i]=='1'&&s[i+1]=='3'&&s[i+2]=='0'){
            cout<<'m'; i=i+2;
        }else if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='0'){
            cout<<'n'; i=i+2;
        }else if(s[i]=='1'&&s[i+1]=='5'&&s[i+2]=='0'){
            cout<<'o'; i=i+2;
        }else if(s[i]=='1'&&s[i+1]=='6'&&s[i+2]=='0'){
            cout<<'p'; i=i+2;
        }else if(s[i]=='1'&&s[i+1]=='7'&&s[i+2]=='0'){
            cout<<'q'; i=i+2;
        }else if(s[i]=='1'&&s[i+1]=='8'&&s[i+2]=='0'){
            cout<<'r'; i=i+2;
        }else if(s[i]=='1'&&s[i+1]=='9'&&s[i+2]=='0'){
            cout<<'s'; i=i+2;
        }else if(s[i]=='2'&&s[i+1]=='0'&&s[i+2]=='0'){
            cout<<'t'; i=i+2;
        }else if(s[i]=='2'&&s[i+1]=='1'&&s[i+2]=='0'){
            cout<<'u'; i=i+2;
        }else if(s[i]=='2'&&s[i+1]=='2'&&s[i+2]=='0'){
            cout<<'v'; i=i+2;
        }else if(s[i]=='2'&&s[i+1]=='3'&&s[i+2]=='0'){
            cout<<'w'; i=i+2;
        }else if(s[i]=='2'&&s[i+1]=='4'&&s[i+2]=='0'){
            cout<<'x'; i=i+2;
        }else if(s[i]=='2'&&s[i+1]=='5'&&s[i+2]=='0'){
            cout<<'y'; i=i+2;
        }else if(s[i]=='2'&&s[i+1]=='6'&&s[i+2]=='0'){
            cout<<'z'; i=i+2;
        }
        
        i++;
    }
    
    
    cout<<endl;
    
    
    }
    
    
}
