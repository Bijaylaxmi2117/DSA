// Print sum of all even number from 1 to n.
#include <iostream>
using namespace std;

int main()
{
    int n, i, sum;
    i = 2;
    sum = 0;
    cout << "Enter the value of n :";
    cin >> n;
    while (i <= n)
    {
        sum+=i;
        i=i+2;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}