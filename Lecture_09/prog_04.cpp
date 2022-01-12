//Update the element of the array using function
#include<iostream>
using namespace std;

void update(int arr[],int n)
{
    cout<<endl<<"Inside the function"<<endl;
    //Updating array's first element
    arr[0]=78;
    //printing the array
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Going back to the main function"<<endl;
    
}
int main()
{
    int arr[6]={7,9,20,5,3,0};
    update(arr,6);
    //print the array
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}