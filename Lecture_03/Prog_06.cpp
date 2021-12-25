//print the following pattern.
/*
  ****
  ****
  ****
  ****
  n=4 */

#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int i,j;
    i=1;
    while (i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}