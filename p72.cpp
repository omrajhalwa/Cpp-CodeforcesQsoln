#include<bits/stdc++.h>
using namespace std;

int
main ()
{
  int n, a[1002], k = 0;

  cin >> n;
  for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

  for (int i = 0; i < n - 1; i++)
    {
      int c, b;
      b = max (a[i], a[i + 1]);
      c = min (a[i], a[i + 1]);
      for (int j = 0; j < n-1; j++)
	{
	  if (a[j] < b && a[j] > c)
	    {
	      if (a[j + 1] > b || a[j + 1] < c)
		{
		  k++;
		}
	    }
	    if (a[j+1] < b && a[j+1] > c)
	    {
	      if (a[j ] > b || a[j] < c)
		{
		  k++;
		}
	    }
	}

    }
  if(k>0){
      cout<<"yes";
  }else{
      cout<<"no";
  }


}