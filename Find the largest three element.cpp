#include<bits/stdc++.h>
using namespace std;

void Largestthree(int arr[],int n)
{
    int max1,max2,max3;
    max1=max2=max3=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max1<arr[i])
        {
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(max2<arr[i])
        {
            max3=max2;
            max2=arr[i];
        }
        else if(max3<arr[i])
        {
            max3=arr[i];
        }
    }
    cout<<"Three elements are: "<<max1<<" "<<max2<<" "<<max3<<endl;
}
int main()
{
    int arr[]={10, 4, 3, 50, 23, 90};
    int size=sizeof(arr)/sizeof(arr[0]);
    Largestthree(arr,size);
    return 0;
}
