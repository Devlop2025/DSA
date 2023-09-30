#include<iostream>
using namespace std;

int sum(int A,int B)
{
    return (A+B);
}

int main()
{
    int a,b;
    cout<<"Enter 1st Number:";
    cin>>a;
    cout<<"Enter 2nd Number:";
    cin>>b;
    int result=sum(a,b);
    cout<<"The Result Is=";cout<<result;
    return 0;

}