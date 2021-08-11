#include<bits/stdc++.h>
using namespace std;

int sorted(int a[],int b[],int c[], int n, int m, int o)
{
    int i=0,j=0,k=0;
    vector<int> vect;
    while(i<n && j<m && k<o)
    {
        if(a[i]==b[j]&&b[j]==c[k]){
            vect.push_back(a[i]);
            i++;j++;k++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        }else{
            k++;
        }
        int xx=a[i-1];
        while(a[i]==xx)i++;
        int yy=b[i-1];
        while(b[j]==yy)j++;
        int zz=c[k-1];
        while(c[k]==zz)k++;

    }
    if(vect.size()==0) return {-1};
    return vect;

}
int main()
{
    int n;
    
    cout<<"Enter the number of size: \n";
    cin>>n;
    int a[n];
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++)
{
        cout<<"Enter the digit for arr1 you want to add["<<i+1<<"]"<<":"<<endl;
        cin>>a[i];
}
cout<<"Enter the number of size: \n";
    int m;
    cin>>m;
    int b[m];
    int size2 = sizeof(b)/sizeof(b[0]);
 for(int i=0;i<size2;i++)
{
        cout<<"Enter the digit for arr1 you want to add["<<i+1<<"]"<<":"<<endl;
        cin>>b[i];
}
cout<<"Enter the number of size: \n";
    int o;
    cin>>o;
    int c[o];
    int size3 = sizeof(c)/sizeof(c[0]);
 for(int i=0;i<size3;i++)
{
        cout<<"Enter the digit for arr1 you want to add["<<i+1<<"]"<<":"<<endl;
        cin>>c[i];
}
sorted(a,b,c,size,size2,size3);
return 0;
}
