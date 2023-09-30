#include<iostream>
using namespace std;
class account{
    private:
            int bonus=5000;
    public:
            int check()
            {
                return bonus;
            }
            int deposit(int amount)
            {
                amount=amount+bonus;
                return amount;
            }
            int withdraw(int wdam,int tam)
            {
                if(wdam>tam)
                {
                    cout<<"Sorry, Your Balance Is Low, Plese Check (Total Amount In Account=)";
                    return tam;
                }
                else
                {
                    return tam=tam-wdam;
                    return tam;
                }
            }

};
int main()
{
    account a1;
    string name;
    cout<<"Enter Your Name:";
    cin>>name;
    cout<<"Create A Successful Account For "<<name<<endl;
    cout<<"Your Current Balance Is=";
    int total=a1.check();
    cout<<total;
    cout<<endl<<endl;
    cout<<"###### Main Menu ######"<<endl;
    cout<<"1. Deposit Money"<<endl;
    cout<<"2. Withdraw Money"<<endl;
    cout<<"3. Exit Main Menu"<<endl;
    cout<<endl;
    int choice;
    cout<<"Please Enter Your Choice:";
    cin>>choice;
    int wdam,tam,dam;
    switch (choice)
    {
    case 1:
        cout<<"Enter Your Deposit Amount:";
        cin>>dam;
        cout<<"Your Current Balance Is="<<a1.deposit(dam);
        break;
    case 2:
        cout<<"Enter Your Withdraw Amount:";
        cin>>wdam;
        cout<<"Your Current Balance Is="<<a1.withdraw(wdam,total);
        break;
    default:
        break;
    }
    return 0;
}
