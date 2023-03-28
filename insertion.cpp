#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n);
int main()
{
    int arr[20];
    int n,i;
    cout<<"enter the value of n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void insertion_sort(int arr[],int n)
{
    int i,temp;
    for(i=1;i<n;i++)
   {
     temp=arr[i];
     for(int j=i-1;j>=0 && temp<arr[j];j--)
     {
        arr[j+1]=arr[j];
        arr[j]=temp;
     }
   }
}