#include<iostream>

using namespace std;

void uo(int arr[],int arr1[],int m,int n)
{
    int i=0; 
    int j=0;
    while(i<m && j<n)
    {
        if(arr[i]<arr1[j])
        cout<<arr[i++]<<" ";
        else if(arr1[j]<arr[i])
        cout<<arr1[j++]<<" ";
        else{
            cout<<arr1[j++]<<" ";
            i++;
        }
    }
    while(i<m)
    cout<<arr[i++]<<" ";
    while(j<n)
    cout<<arr1[j++]<<" ";

}
void inter(int arr[],int arr1[],int m,int n)
{
    int x=0,y=0;
    cout<<endl;
    while(x<m && y<n)
    {
        if(arr[x]<arr[y])
        x++;
        else if(arr1[y]<arr[x])
        y++;
        else{
            cout<<arr1[y]<<" ";
            y++;
            x++;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size Ist of array \n";
    cin>>n;
    int arr[n];
    int sizearr = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<"Enter the digit arr[] you want to add "<<i+1<<":"<<endl;
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the size of 2nd Array:\n";
    cin>>m;
    int arr1[m];
    int sizearr1=sizeof(arr1)/sizeof(arr1[0]);
    for(int j=0;j<m;j++){
        cout<<"Enter the digit a1[] you want to add "<<j+1<<":"<<endl;
        cin>>arr1[j];
    } 
uo(arr,arr1,sizearr,sizearr1);
inter(arr,arr1,sizearr,sizearr1);
return 0;
}