#include<iostream>
using namespace std;
int max(int arr[],int start,int end)
{
    int mx=INT16_MIN;
    while(start<=end)
    {
    int mid=(start+end)/2;
    if(arr[mid]>=arr[start])
    {
        mx=max(mx,arr[mid]);
        start=mid+1;
    }
    else if(arr[mid]<=arr[end])
    {
        mx=max(mx,arr[end]);
        end=mid-1;
    }  
      
   }
   return mx;
}
int main()
{
    int array[]={13,15,17,19,21,11};
    int result=max(array,0,5);
    cout<<"The Maximum Element Is="<<result;
    return 0;
}