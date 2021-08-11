#include<bits/stdc++.h>

using namespace std;
void findElement(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=1+i;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                cout<<arr[i];
                break;
            }
        }
    }

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
findElement(arr,size);
return 0;
}