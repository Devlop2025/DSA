#include<iostream>
using namespace std;
int min(int arr[],int start,int end)
{
    int mn=INT16_MAX;
    while(start<=end)
    {
    int mid=(start+end)/2;
    if(arr[mid]>=arr[start])
    {
        mn=min(mn,arr[mid]);
        start=mid+1;
    }
    else if(arr[mid]<=arr[end])
    {
        mn=min(mn,arr[end]);
        end=mid-1;
    }  
      
   }
   return mn;
}
int main()
{
    int array[]={13,15,17,19,21,11};
    int result=min(array,0,5);
    cout<<"The Minimum Element Is="<<result;
    return 0;
}