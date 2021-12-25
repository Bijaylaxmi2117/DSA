//Check prime or not.
#include<iostream>
using namespace std;
int main()
{
    int n,i=2;
    cout<<"Enter a number :";
    cin>>n;
    while (i<n)
    {
        if(n%i==0)
        {
            cout<<"Not prime for :"<<i<<endl;
        }
        else
        {
            cout<<"Prime for :"<<i<<endl;
        }
        i++;
    }
    return 0;
    
}