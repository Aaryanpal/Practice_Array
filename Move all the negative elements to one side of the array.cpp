#include<iostream>
using namespace std;

void move(int arr[],int size)
{
    int left=0;
    int right=size-1;
    while(left<=right)
    {
        if(arr[left]<0 && arr[right]<0){
        left++;
        }
        else if(arr[left]>0 && arr[right]<0)
        {
            swap(arr[right],arr[left]);
            left++;
            right--;
        }
        else if(arr[left]>0 && arr[right]>0)
        {
            right--;
        }

    }
    for(int j=0;j<size;j++)
        cout<<arr[j]<<" ";
    
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
    move(arr,size);
    return 0;
}