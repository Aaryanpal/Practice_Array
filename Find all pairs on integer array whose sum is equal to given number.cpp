#include<iostream>
using namespace std;

void pairSum(int arr[],int n,int sum)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==sum)
                count++;
            }
    }
    cout<<count<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number of size: \n";
    cin>>n;
    int arr[n];;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
{
        cout<<"Enter the digit you want to add["<<i+1<<"]"<<":"<<endl;
        cin>>arr[i];
}
cout<<"Enter the sum";
int sum{};
cin>>sum;
pairSum(arr,size,sum);
return 0;
}