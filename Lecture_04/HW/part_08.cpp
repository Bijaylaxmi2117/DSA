/*
1 2 3 4 5 
 2 3 4 5  
  3 4 5   
   4 5    
    5   */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = n;
    int space = 0;
    while (row >= 1)
    {
        int col = 1;
        while (col <= space)
        {
            cout << " ";
            col++;
        }
        col = 1;
        while (col <= row)
        {
            cout << col + space << " ";
            col++;
        }
        cout << endl;
        space++;
        row--;
    }
    return 0;
}