#include<iostream>
using namespace std;
int binary_search(int arr[],int key)
{
    int start,end,mid;
    start=0;
    end=((arr.len())-1);
    while(start>end)
    {
        if(arr[mid]==key)
        {
            return key;
        }
    }
   return 0;
}
int main()
{
    int n;
    int value;
    cout<<"Enter The Array Element In Sorted Order:"<<endl;
    cout<<"Enter The Size:";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element["<<i+1<<"]=";
        cin>>ar[i];
    }
    cout<<"Enter The Element Which You Will Search:";
    cin>>value;

    int result=binary_search(ar[],value);
    cout<<"Sucessfully Search:"<<result;
    return 0;
}