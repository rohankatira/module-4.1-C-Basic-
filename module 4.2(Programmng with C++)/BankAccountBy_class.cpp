/* Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance  */
#include<iostream>
using namespace std;
class Bank

{
    private:
    string name;
    string acc_type;
    long long acc_no;
    double acc_balance;
    public:
    void assign_value(){
        cout<<"enter the name of depositor: ";
        //cin>>name;
        getline(cin,name);
        cout<<"enter the account type: ";
        getline(cin,acc_type);
        cout<<"enter the account number: ";
        cin>>acc_no;
        cout<<"enter the account balance: ";
        cin>>acc_balance;
    }
    void display(){
        cout<<"name of depositor is: "<<name<<endl;
        cout<<"the account type is: "<<acc_type<<endl;
        cout<<"the account number is: "<<acc_no<<endl;
        cout<<"the account balance is: "<<acc_balance<<endl;
    }
    void deposit(){
    double bal;
    cout<<"enter the amount you want to deposit: "<<endl;
    cin>>bal;
    acc_balance=acc_balance+bal;
    cout<<"availabe balance is: "<<acc_balance<<endl;
    }
    void withdraw(){
    double money;
    cout<<"enter the amount you want to withdraw: "<<endl;
    cin>>money;
    acc_balance=acc_balance-money;
    cout<<"available balance is: "<<acc_balance<<endl;
    }

};


int main(){
    int choice;
Bank b;   //object created
b.assign_value();
//b.display();
//b.deposit();
//b.withdraw();
cout<<"press 1: to deposit the amount\npress 2: to withdraw the amount\npress 3: to display name and balance\nenter your choice: ";
cin>>choice;
switch (choice)
{
case 1:
    b.deposit();
    break;
    case 2:
    b.withdraw();
    break;
    case 3:
    b.display();
    break;

default:
cout<<"\ninvalid input";
    break;
}
}