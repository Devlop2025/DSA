#include<iostream>
using namespace std;
int main()
{
    int arr[]={20,11,4,66,8};
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<=4;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
        
    }
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}