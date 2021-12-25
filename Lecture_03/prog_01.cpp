//WAP in C++ that accept a character from user and print lowercase or uppercase or numeric.
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if (ch>='a'&&ch<='z')
    {
        cout<<ch<<" is lowercase."<<endl;
    }
    else if (ch>='A'&&ch<='Z')
    {
        cout<<ch<<" is uppercase."<<endl;
    }
    if (ch>='0'&&ch<='9')
    {
        cout<<ch<<" is number."<<endl;
    }

    
    return 0;
}

