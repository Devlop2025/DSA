#include<iostream>
using namespace std;
struct bank{
    int totalbal;
    int withdraw(int amt)
    {
        if(amt>totalbal)
        {return -1;}
        else
        {return (totalbal=totalbal-amt);}
    }
    int deposit(int newamt)
    {
        return(totalbal=totalbal+newamt);
    }
    int checkbalance()
    {return totalbal;}

};

//Account Create
string accmake()
{
    string name,password,cnfpassword;
    cout<<"Enter The Account Name:"<<endl;
    cin>>name;
    cout<<"Enter The Password:"<<endl;
    cin>>password;
    cout<<"Re Enter The Password:"<<endl;
    cin>>cnfpassword;
    if(password==cnfpassword)
    {
        cout<<"Account Sucessfully Created"<<endl;
    }
    else{cout<<"Invalid";}
    return name;
}

int main()
{
    int op;
    do{
    cout<<"########## DISPLAY ##########"<<endl;
    cout<<"1.Create Account"<<endl;
    cout<<"2.Deposit Money"<<endl;
    cout<<"3.Check Balance"<<endl;
    cout<<"EXIT"<<endl;
    cout<<endl;
    cout<<"Enter The Option=";
    cin>>op;

    if(op==1)
    {
        string nm=accmake();
        bank nm;
        
    }
    }while(op!=4);

    return 0;
}