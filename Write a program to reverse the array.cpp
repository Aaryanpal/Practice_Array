#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        if(i<size/2){
        temp=arr[i];
        arr[i]=arr[(size-1)-i];
        arr[(size-1)-i]=temp;
    }
     
        cout<<arr[i]<<" ";
        
    }
    

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
reverse(arr,size);
return 0;
}
