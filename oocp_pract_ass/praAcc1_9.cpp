#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class bankAcDetais
{
    string name;
    double acNo;
    char type;
    double balance;
public:
    bankAcDetais(){}
    bankAcDetais(const string &name,double acNo,char type,double balance):name(name),acNo(acNo),type(type),balance(balance){}
    void deposit(int amount)
    {
        balance +=amount;
        cout<<"Rs. "<<amount<<" credited to account no "<<acNo<<" successfully . New balance :"<<balance<<endl;
    }
    void withdraw(int amount)
    {
        balance -=amount;
        cout<<"Rs. "<<amount<<" debited from account no "<<acNo<<" successfully. New balance :"<<balance<<endl;
    }
    void displayBankDetails()
    {
        cout<<left;
        cout<<setw(14)<<"Name"<<":"<<name<<endl
            <<setw(14)<<"Account no"<<":"<<acNo<<endl
            <<setw(14)<<"Account type"<<":"<<type<<endl
            <<setw(14)<<"Balance"<<":"<<balance<<endl
            <<"-------------------------------------------------------------------------"<<endl;
    }
};

int main()
{
    bankAcDetais b1[3];
    for (int i = 0;i<3;i++)
    {
        string c_name;
        double c_acno,c_balance;
        char c_type;

        cout<<"Enter name :";
        cin>>c_name;
        cout<<"Enter Ac no :";
        cin>>c_acno;
        cout<<"Enter type :";
        cin>>c_type;
        cout<<"Enter initial balance :";
        cin>>c_balance;

        b1[i] = bankAcDetais(c_name,c_acno,c_type,c_balance);
    }
    for(int i =0;i<3;++i)
    {
        b1[i].displayBankDetails();
    }

    int pos;
    cout<<"Enter position to perform action in above details";
    cin>>pos;

    char choice;
    
        cout<<"d.diposit\nw.withdraw\n.s.display\n";
        cout<<"enter choice :";
        cin>>choice;
        switch (choice)
        {
            case 'd':
                int amount1;
                cout<<"Enter amount to diposit :";
                cin>>amount1;
                b1[pos-1].deposit(amount1);
                break;
            case 'w':
                int amount2;
                cout<<"Enter amount to withdraw :";
                cin>>amount2;
                b1[pos-1].withdraw(amount2);
                break;
            case 's':
                b1[pos-1].displayBankDetails();
                break;
        }
    return 0;
}