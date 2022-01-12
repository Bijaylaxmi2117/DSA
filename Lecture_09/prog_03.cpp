//Print maximum and minimum element of the array
#include<iostream>
using namespace std;

int getMin(int arr[],int size)
{
    int min=arr[0];
    for (int i = 0; i <size; i++)
    {
        if (arr[i]<min)
        {
           min=arr[i];
        }
        
    }
    return min;
}

int getMax(int arr[],int size)
{
    int max=arr[0];
    for (int i = 0; i <size; i++)
    {
        if (arr[i]>max)
        {
           max=arr[i];
        }
        
    }
    return max;
}
int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    //taking input in array
    cout<<"Enter the elements of the array "<<endl;
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum value is "<<getMax(arr,size)<<endl;
    cout<<"Minimum value is "<<getMin(arr,size)<<endl;
    return 0;
}