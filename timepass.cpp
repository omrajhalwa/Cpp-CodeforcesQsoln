#include <bits/stdc++.h>
using namespace std;
 
// Driver Code
int main()
{
    int a[5];
 #include <cstring>
#include <iostream>
using namespace std;
 
// Driver Code


    char str[] = "geeksforgeeks";
    memset(str, 't', sizeof(str));
    cout << str;
    

    // all elements of A are zero
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
 
    // all elements of A are -1
    memset(a, -1, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
 
    // Would not work
    memset(a, 1, sizeof(a)); // WRONG
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
}