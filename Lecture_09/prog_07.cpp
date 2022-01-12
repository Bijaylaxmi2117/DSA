//Reverse an array
#include<iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
void printArray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[7]={2,4,8,7,9,0,5};
    int b[4]={0,1,3,5};
    cout<<"Before reverse the array are"<<endl;
    printArray(a,7);
    printArray(b,4);
    reverse(a,7);
    reverse(b,4);
    cout<<"After reverse array are"<<endl;
    printArray(a,7);
    printArray(b,4);
}