#include<iostream>
using namespace std;

int chkmax(int arr[],int size)
{   
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int chkmin(int arr[],int size)
{
     int min;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Enter the number of size ";
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the digit you want to add"<<i<<":\n";
        cin>>arr[i];
    }
    cout<<"MAX :"<<chkmax(arr,size);
    cout<<"MIN :"<<chkmin(arr,size);
    return 0;
}