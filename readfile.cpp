#include <bits/stdc++.h>
using  namespace std;
int main ()
{
    int n=100000;
    int *a= new int [n];
    ifstream fin("100k.txt");
    for (int i=0; i<n; i++)
    {
        fin>>a[i];

    }

    for (int i=0; i<n; i++)
    {
        cout<<i<<" "<<a[i]<<endl;


    }
}
