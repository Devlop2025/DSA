#include<iostream>
using namespace std;
int rotatedsearch(int arr[],int key)
{
       int start=0;
       int end=6;
       if(arr[0]==key)
         {return 0;}
       while(start<=end)
       {
           int mid=(start+end)/2;
           if(arr[mid]==key)
           {
               return mid;
           }
           if( arr[mid]>arr[start])         
           { if(arr[start]<=key && arr[mid]>key)
             {
               end=mid-1;
             }
             else
             {
               start=mid+1;
             }
           }

           else
           {  if(key>=arr[mid+1] && key<=arr[end])   
                    {
                       start=mid+1;
                    }
                    else
                    {
                        end=mid-1;
                    }
           }
       }
       return -1;
}
int main()
{
    int array[]={4,5,6,7,1,2,3};
    int result=rotatedsearch(array,6);
    cout<<"The Element Index Is="<<result;
    return 0;
}