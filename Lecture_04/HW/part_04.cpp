/*
A B C
B C D
C D E
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        int value=row;
        while(col<=row)
        {
           char ch='A'+value-1;
           cout<<ch<<" ";
           value++;
           col++;
        }
        cout<<endl;
        row++;
        
    }
    
} 