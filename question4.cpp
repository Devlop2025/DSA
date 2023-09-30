#include<iostream>
using namespace std;
int power(int num,int exp)
{
    int rst=1;
    for(int i=1;i<=exp;i++)
    {
       rst=rst*num;
    }
    return rst;
}
int main()
{
    int num,exp;
    cout<<"Enter The Number:";
    cin>>num;
    cout<<"Enter The Exponent:";
    cin>>exp;
    int result=power(num,exp);
    cout<<"The Result Is=";cout<<result;
    
    return 0;

}
