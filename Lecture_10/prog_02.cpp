//sort 0,1 in a given array
#include<iostream>
using namespace std;
 void printArray(int arr[],int size)
 {
     for (int i = 0; i <size; i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
 }
 void sortOne(int arr[],int n)
 {
     int i=0,j=n-1;
     while (i<j)
     {
         while (arr[i]==0&&i<j)
         {
             i++;
         }
         while (arr[j]==1&&i<j)
         {
            j--;
         }
         //arr[i]==1 and arr[j]==0
         if (i<j)
         {
            swap(arr[i],arr[j]);
            i++;
            j--;
         }
         
     }
     

 }
 int main()
 {
     int arr[6]={0,1,1,1,0,0};
     sortOne(arr,6);
     printArray(arr,6);
     return 0;
 }