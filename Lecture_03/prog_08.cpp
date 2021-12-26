//convert fahrenhit to celsious.
#include<iostream>
using namespace std;
int main()
{
    int cel;
    float fah;
    cout<<"Enter temperature in fahrenhit : ";
    cin>>fah;
    cel=5*(fah-32)/9;
    cout<<"Temperature in celsious is : "<<cel;
    return 0;
}