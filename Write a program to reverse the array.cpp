#include<iostream>
using namespace std;

int 
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
