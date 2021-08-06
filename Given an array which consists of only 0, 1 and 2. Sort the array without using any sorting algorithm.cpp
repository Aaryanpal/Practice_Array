#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int size)
{
    int low=0;
    int mid=0;
    int high=size-1;
    while(mid<=high)
    {
        switch(arr[mid]){

            //if the elemnt is 0
            case 0:
            swap(arr[low],arr[mid]);
            low++;
            mid++;
            break;
            //if the element is 1
            case 1:
            mid++;
            break;

            case 2:
            swap(arr[mid],arr[high]);
            high--;
            break;
        }
    }
     for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
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
        cout<<"Enter only the 0 ,1 2 you want to add["<<i+1<<"]"<<":"<<endl;
        cin>>arr[i];
}
sort(arr,size);
return 0;
}