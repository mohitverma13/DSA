#include<bits\stdc++.h>
using namespace std;
void insert(int arr[],int n,int pos,int value)
{
    n++;
    for(int i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void del(int arr[],int n,int pos)
{
    --pos;
    for(int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int linear (int arr[],int n,int val)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            return i;
        }
    }
    return -1;
}
 void print(int arr[],int n)
 {
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 }

 int main()
 {
    int n, arr[n],value,pos;
    cout<<"Enter size of array\n";
    cin>>n;
    cout<<"Enter array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<"\n";
   int ch;
   cout<<"1. choose to insert element\n";
   cout<<"2. choose to delete element\n";
   cout<<"3. choose to search element\n";
   cout<<"4. choose to print array\n\n";
   cout<<"Enter choice\n";
   cin>>ch;
   switch(ch)
   {
      case 1:
    cout<<"Which position?\n";
    cin>>pos;
    cout<<" Enter Value \n";
    cin>>value;
    insert(arr,n,pos,value);
    break;

    case 2:
    cout<<"Which position\n";
    cin>>pos;
    del(arr,n,pos);
    break;

    case 3:
    cout<<"Enter value to be searched\n";
    cin>>value;
    cout<<"Element present at index "<< linear(arr,n,value)<<endl;
    break;

    case 4:
    print(arr,n);
    break;
    
    default:cout<<"Action not performed\n";
   }
   return 0;
 }
