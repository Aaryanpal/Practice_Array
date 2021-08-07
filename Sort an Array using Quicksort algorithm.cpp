#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
int pivot=arr[low];
int i=low-1;
int j=high;
do{
    i++;
}while(arr[i]<=pivot);

do{
    j--;
} while (arr[j]>pivot);

if(i<j)
{
    swap(arr[i],arr[j]);
}
swap(arr[low],arr[j]);
return j;

}
void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
        int j=partition(arr,l,h);
        quicksort(arr,l,j-1);
        quicksort(arr,j+1,h);
    }
}

int main()
{
    int n;
    int l=0;
    cout<<"Enter the number of size: \n";
    cin>>n;
    int h=n-1;
    int arr[n];;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
{
        cout<<"Enter the digit you want to add["<<i+1<<"]"<<":"<<endl;
        cin>>arr[i];
}
quicksort(arr,l,h);
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}