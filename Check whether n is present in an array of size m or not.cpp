#include<iostream>
using namespace std;

bool check(int arr[],int n,int num)
{
    for(int i=0;i<n;i++)
    {
        if(num==arr[i]) 
        return true;
    }

return false;
}
int main()
{
    int n;
    cout<<"Enter the size of array \n";
    cin>>n;
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<"Enter the digit you want to add "<<i+1<<":"<<endl;
        cin>>arr[i];
    } 
    cout<<"Enter the integer you want to search\n";
    int num;
    cin>>num;
    if(check(arr,n,num))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
return 0;
}