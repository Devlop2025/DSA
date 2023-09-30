#include<iostream>
using namespace std;
void prm(int num1,int num2)
{
    int j=2;
    for(int i=num1;i<=num2;i++)
    {
        for(j=2;j<num2;j++)
        {
          if(i%j==0)
         {break;}
         
        }
        if(j==i)
         {cout<<i;cout<<" ";}
    }
}
int main()
{
    int num1,num2;
    cout<<"Enter The Number 1:";
    cin>>num1;
    cout<<"Enter The Number 2:";
    cin>>num2;
    cout<<"The Prime Number Between ";
    cout<<num1;cout<<" And ";cout<<num2;cout<<" Is=";cout<<endl;
    prm(num1,num2);
    return 0;

}