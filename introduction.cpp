/*#include<iostream>
#include<string>
using namespace std;


int main(){

string name;
cout<<"May i know your name ";
cin>>name;
getline(cin,name);
cout<<"Welcome Mr "<< name;


return 0;*/



#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    string str;
    cout<<"Enetr your Name";
    cin>>str;
        getline(cin,str);
    cout<<"Welcome "<<str;
        
    return 0;
}