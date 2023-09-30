#include<iostream>
using namespace std;
int find(int arr[],int elm,int size,int index)
{
    if(arr[index]==elm)
    {
        return index;
    }
    else if(index==size)
    {
        return 1;
    }
    else
    {
        int rc=find(arr,elm,size,index+1);
        return rc;
    }
}
int main()
{
    int array[5]={20,25,6,7,41};
    int result=find(array,6,5,0);
    cout<<result;
    return 0;
}
