//Linear search
#include<iostream>
using namespace std;
//search function
bool search(int arr[],int size,int key)
{
    for (int  i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
        
    }
    return 0;
}
int main()
{
    int arr[10]={1,3,2,5,8,-5,-2,10,9,4};
    cout<<"Enter the element to search : ";
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if (found)
    {
        cout<<"Element is present"<<endl;
    }
    else
    {
        cout<<"Element is absent"<<endl;
    }
    return 0;
}