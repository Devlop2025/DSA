#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
    
    int leftlength=mid-start+1;
    int leftarr[leftlength];
    for(int i=0;i<leftlength;i++)
    {
        leftarr[i]=arr[start+i];
    }

    int rightlength=end-(mid+1)+1;
    int rightarr[rightlength];
    for(int i=0;i<rightlength;i++)
    {
        rightarr[i]=arr[(mid+1)+i];
    }

    int l=0; 
    int r=0; 
    int current=start;

    
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

    
    while(l<leftlength)
    {
        arr[current]=leftarr[l];
        l++;
        current++;
    }
    while(r<rightlength)
    {
        arr[current]=rightarr[r];
        r++;
        current++;
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