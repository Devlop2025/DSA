#include<iostream>
using namespace std;
int find(int arr[],int size,int index)
{
    if(index>=size)
    {
        return (arr[index-1]);
    }
    int fem=find(arr,6,index+1);
    if(fem<arr[index])
    {
        return fem;
    }
    else
    {
        return arr[index];
    }
}
int main()
{
    int array[6]={12,22,3,55,88,1};
    int result=find(array,6,0);
    cout<<result;
    return 0;
}