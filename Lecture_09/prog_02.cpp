//fill the array with same value using for loop
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int value;
    cout<<"Enter the value to set : ";
    cin>>value;
    int arr[size];
    int i;
    //Initializing the array element
    for ( i = 0; i < size; i++)
    {
        arr[i]=value;
    }
    //print array
    cout<<"The array is : "<<endl;
    for ( i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}