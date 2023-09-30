#include<iostream>
using namespace std;
void zero_small(int &A,int &B)
{
    if(A>B)
    {
        cout<<"The Second NumberIs=0";
    }
    else if(A<B)
    {
        cout<<"The First Number Is=0";
    }
    else
    {
        cout<<"No Result";
    }
}
int main()
{
    int num1,num2;
    cout<<"Enter The First Number:";
    cin>>num1;
    cout<<"Enter The Second Number:";
    cin>>num2;
    zero_small(num1,num2);

    return 0;

}