#include<iostream>
using namespace std;

int main(){

char str[11][11];
int n,m,count =0,a=0,b=0,c,d;
cin>>n>>m;

for(int i=1;i<=n;i++)
{   
  for(int j=1; j<=m; j++)
  {
    cin >> str[i][j];
    
  }
}


for(int i=1;i<=n;i++)
{count=0;
  for(int j=1; j<=m; j++)
  {
    if(str[i][j]=='.'){
        count++;
    }else {
        count=0;
        break;
    }
    
  }
  if(count>0){a=a+count;}
}

for(int j=1;j<=m;j++)
{count=0;
  for(int i=1;i<=n;i++)
  {
    if(str[i][j]=='.'){
        count++;
    }else{
        count=0;
        break;
    }
  }
  if(count>0){b+=count;}
}

c=a/m;
d=b/n;
cout<<a+b-c*d;
}