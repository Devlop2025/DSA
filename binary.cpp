#include<iostream>
using namespace std;
int binary_search(int arr[],int size,int elm)
{
    int start=0;
    int end=(size-1);
    
    while(start<=end)
    {
    int mid=(start+end)/2;
    if(arr[mid]==elm)
    {
        cout<<"Element Detect Index=";
        return mid;
    }
    else if(arr[mid]>elm)
    {
        end=mid-1;
    }
    else
    {
        start=mid+1;
    }
    }
    cout<<"Your Data Not Found";
    return -1;
}
int main()
{
    int n;
    cout<<"Enter Your Size:";
    cin>>n;
    int array[n];
    cout<<"Array Must Be Sorted"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element ["<<i<<"]=";
        cin>>array[i];
    }
    int search;
    cout<<"Enter Your Searching Element:";
    cin>>search;
    int result=binary_search(array,n,search);
    cout<<result;
    return 0;
}