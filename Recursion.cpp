#include<iostream>
using namespace std;
void print(int num)
{
    if(num==1)
    {
        cout<<num;
        cout<<endl;
        return;
    }
    else
    {
        print(num-1);
        cout<<num;
        cout<<endl;
        return;
    }
}
int main()
{
    int num;
    cout<<"Enter The Last Number:";
    cin>>num;
    print(num);
    return 0;
}