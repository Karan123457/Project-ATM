#include<iostream>
using namespace std;
class ATM      //creating class
{
private:
    int balance;
public:
    ATM(int bal){  //creating conatructor
        balance = bal;
    }
    int getBalance(){
        return balance;
    }
    int withdraw(int amount)
    {
        if(amount>balance){
            return false;
        }
        balance -= amount;
        return true;
    }
    void deposit(int amount){
        balance += amount;
    }
};
int main()
{
    ATM atm(1000);
    int choice,amount,success;
    char option;
    do
    {
        system("cls");
        cout<<"1. View Balance"<<endl;
        cout<<"2. Cash Withdraw"<<endl;
        cout<<"3. Cash Deposit"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Your Choice :";
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Your Balance: "<<atm.getBalance();
            break;
        case 2:
            cout<<"Your Avalable Balance :"<<atm.getBalance()<<endl;
            cout<<"Enter the Amount to Withdraw: ";
            cin>>amount;
            success = atm.withdraw(amount);
            if(success)
            {
                cout<<"withdraw Successful..."<<endl;
            }
            else
            {
                cout<<"Insufficient Balance..."<<endl;
            }
            break;
        case 3:
            cout<<"Enter the Amount to Deposit: ";
            cin>>amount;
            atm.deposit(amount);
            cout<<"Deposite Successful..."<<endl;
            break;
        case 4:
            cout<<"Thanks for using ATM"<<endl;
            break;
        default:
            cout<<"Invalid Choice"<<endl;
        }
        cout<<"\nDo You want to try Another Transaction [Yes / No] :";
        cin>>option;
    }
    while(option == 'y'|| option == 'Y');
   ;
    retrurn 0;
}

