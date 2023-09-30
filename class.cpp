#include<iostream>
using namespace std;

struct rec{
    int len;
    int bth;
    int area()
    {
        return len*bth;
    }
    int prm()
    {
        return (2*(len+bth));
    }
    void swap ()
    {
        int temp=len;
        len=bth;
        bth=temp;
    }

};
int main()
{
    rec sqr;
    sqr.len=20;
    sqr.bth=10;
    cout<<sqr.area();
    cout<<endl;
    cout<<sqr.prm();
    return 0;
}