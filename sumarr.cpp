#include<iostream>
using namespace std;
int main()
{
    int arr1[4]={1,5,10,13};
    int arr2[3]={6,7,15};
    int finalarr[7];
    int i=0;
    int j=0;
    int k=0;
    while(j<=3)
    {
        if(arr1[i]<arr2[j])
        {
            finalarr[k]=arr1[i];
            i++;
            k++;
        }
        else if(arr2[j]<arr1[i])
        {
            finalarr[k]=arr2[j];
            j++;
            k++;
        }
    }
    for(int c=0;c<7;c++)
    {
        cout<<finalarr[c]<<" ";
    }
    return 0;

}