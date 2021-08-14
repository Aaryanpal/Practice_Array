#include<bits/stdc++.h>
using namespace std;
void rearrane(int arr[],int n)
{
    int i=0,j=0,k=0;
    while(k<n && j<n && i<n)
    {
        if(k%2==0)
        {
            if(arr[k]=0)
            {
                i=k;
                j=k;
                while (i<n && arr[i]>=0) i++;
                {
                    if(i>=n) break;
                    right_rotate()
                }
                
            }
        }
        k++
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
rearrane(arr,size);
return 0;
}