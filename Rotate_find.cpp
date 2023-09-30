#include<iostream>
using namespace std;
int bs(int arr[],int start,int end,int key)
{
    while(start<=end)
    {
    int mid=(start+end)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    if(arr[mid]>arr[start])
    {
        if(arr[start]>=key && key<=arr[mid])
        {
            end=mid-1;
        }
        
        else
        {
            start=mid+1;
        }
    }
    else
    {
        if(arr[mid]>=key && key<=arr[end])
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }  
      
   }
   return -1;
}
int main()
{
    int array[]={13,15,17,19,21,11};
    int result=bs(array,0,5,13);
    cout<<"The Element Is In Array Index="<<result;
    return 0;
}