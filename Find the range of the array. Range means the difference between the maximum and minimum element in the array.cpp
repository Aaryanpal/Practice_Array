#include<bits/stdc++.h>
using namespace std;

void range(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for (int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }
    cout<<"Range is Equal to"<<arr[size-1]-arr[0]<<endl;

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
range(arr,size);
return 0;  
}