#include<iostream>
using namespace std;

void check(int arr[],int size,int num)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(num==arr[i])
        count++;
    }
    cout<<num<<"is occured "<<count<<" many times:"<<endl;

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
cout<<"Enter the number which occurence you need";
int num;
cin>>num;
check(arr,size,num);
return 0;
}