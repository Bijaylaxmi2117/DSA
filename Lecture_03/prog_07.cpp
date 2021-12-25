//print the pattern.
/* 
1 1 1
2 2 2
3 3 3
*/
#include<iostream>
using namespace std;
int main()
{
    int n=3,i,j;
    i=1;
    while (i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}