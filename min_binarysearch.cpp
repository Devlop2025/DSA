#include<iostream>
using namespace std;
int minbinary(int arr[])
{
    int start=0;
    int end=6;
    while(start<=end)
    {
        int mid=(start+end)/2;
        
        if(arr[mid]<arr[mid-1])
        {
            return arr[mid];
        }
        else if(arr[start]>arr[mid])
        {
             end=mid-1;
        }
        else if(arr[mid]>arr[end])
        {
           start=mid+1;
        }
        else
        {
            return arr[start];
        }

    }
}
int main()
{
    int array[]={4,5,6,7,1,2,3};
    int result=minbinary(array);
    cout<<result;
    return 0;
}