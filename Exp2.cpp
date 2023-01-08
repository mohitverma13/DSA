#include<bits/stdc++.h>
using namespace std;
int linear(int arr[],int n,int val)
{
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==val)
        {
            return i;
        }
    }
    return -1;
}
int binaryS(int arr[],int n,int val)
{
    int s=0;
    int e=n;
    
    while(s<=e)
    {
        // int mid=(s+e)/2;
        int mid=s+(e-s)/2;
        if(arr[mid]==val)
        {
            return mid;
        }
        else if(arr[mid]<val)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return -1;
}
int main()
{ 
    int n, arr[n],val;
    cout<<"Enter size  of array\n";
    cin>>n;
    cout<<"Enter array element\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ch;
    cout<<"\nEnter choice\n";
    cout<<"1.Search elemment by Linear search\n";
    cout<<"2.Search elemment by Binary search\n";
    cout<<"\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"Element to be searched\n";
        cin>>val;
        cout<<"Element present at index "<<linear(arr,n,val)<<endl;
        break;
        case 2:
        cout<<"Element to be searched\n";
        cin>>val;
        cout<<"Element  present at index "<<binaryS(arr,n,val)<<endl;
        break;
        default : cout<<"Invalid Choice \n";
    }
    return 0;
}