#include<iostream>
using namespace std;
void rotate(int arr[],int n)
{
    int x=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[0]=x;
cout<<"Rotated array is: \n";
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number of size: \n";
    cin>>n;
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
{
        cout<<"Enter the digit you want to add["<<i+1<<"]"<<":"<<endl;
        cin>>arr[i];
}
rotate(arr,size);
return 0;
}