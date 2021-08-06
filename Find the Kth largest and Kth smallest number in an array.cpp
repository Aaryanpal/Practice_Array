#include<iostream>
using namespace std;

void Array(int arr[],int size,int k){
      
for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp; 
            }
        }
    }
    cout<<k<<"Minimn is: "<<(arr[k-1])<<endl;
    cout<<k<<"Maxm is: "<<arr[size-k]<<endl;

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
int k;
cout<<"Enter the K for smallest and Highest: "<<endl;
cin>>k;
Array(arr,size,k);
return 0;
}