// Print the sum from 1 to n.
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum;
    i = 1;
    sum = 0;
    cout << "Enter the value of n :";
    cin >> n;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "Sum is " << sum << endl;
    return 0;
}