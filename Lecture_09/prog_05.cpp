//print the sum of all elements in an array

#include<iostream>
using namespace std;
//print the elemnts of array
void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
//find the sum of all elements
int printSum(int arr[],int size)
{
    int sum=0;
    for (int  i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    //Initializing the array element
    cout<<"Enter the array element"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"The elements of array are :";
    printArray(arr,size);
    cout<<endl<<"The sum of elements is "<<printSum(arr,size);
    
    return 0;
}