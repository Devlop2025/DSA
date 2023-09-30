#include<iostream>
using namespace std;
int fact(int A)
{
    int ft=1;
    for(int i=A;A>=1;A--)
    {
        ft=ft*A;
    }
    return ft;
}

int main()
{
    int num;
    cout<<"Enter The Number:";
    cin>>num;
    int result=fact(num);
    cout<<num;cout<<"!=";cout<<result;
    return 0;

}