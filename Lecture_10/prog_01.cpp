//Swap alternate number of the given integer array
#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap_Alternate(int arr[],int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
}
int main()
{
    int even[4]={1,5,9,7};
    int odd[5]={0,9,3,8,1};
    swap_Alternate(even,4);
    printArray(even,4);
    swap_Alternate(odd,5);
    printArray(odd,5);

    return 0;
}