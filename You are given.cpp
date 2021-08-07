#include<iostream>
using namespace std;

void checkInteger(int arr[],int n)
{
    int total = n*(n+1)/2;
    for(int i=0;i<n;i++)
    {
        total=total-arr[i];
    }
    cout<<total;
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
checkInteger(arr,size);
return 0;
}