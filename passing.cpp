#include<iostream>
using namespace std;
int* makearr(int size)
{
    int array[size];
    for(int i=0;i<=size;i++)
    {
        cout<<"Array["<<i<<"]=";
        cin>>array[i];
    }
    return (array);
}

int main(void)
{
    int size;
    
    cout<<"Enter The Size Of Array:";
    cin>>size;
    int *ptr;
    ptr=makearr(size);
    for(int i=0;i<=size;i++)
    {
        cout<<ptr[i]<<"  ";
        
    }
    return 0;
}