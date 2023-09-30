#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
    //Making Left Arr
    int leftlength=mid-start+1;
    int leftarr[leftlength];
    for(int i=0;i<leftlength;i++)
    {
        leftarr[i]=arr[start+i];
    }
    //Making Right Arr
    int rightlength=end-(mid+1)+1;
    int rightarr[rightlength];
    for(int i=0;i<rightlength;i++)
    {
        rightarr[i]=arr[(mid+1)+i];
    }

    //Set pointer value
    int l=0; //For Left  RIght Array
    int r=0; //For Right Sorted Array
    int current=start; //For Main Array

    //For Copy In Main Array WIth Sorting
    while(l<leftlength && r<rightlength)
    {
        if(leftarr[l]<rightarr[r])
        {
            arr[current]=leftarr[l];
            l++;
            current++;
        }
        else
        {
            arr[current]=rightarr[r];
            r++;
            current++;
        }
    }

    //For Remaining Array
    while(l<leftlength)
    {
        arr[current]=leftarr[l];
        l++;
    }
    while(r<rightlength)
    {
        arr[current]=rightarr[r];
        r++;
    }
    for(int i=0;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[6]={2,4,6,3,5,7};
    merge(arr,0,2,5);
    return 0;
}