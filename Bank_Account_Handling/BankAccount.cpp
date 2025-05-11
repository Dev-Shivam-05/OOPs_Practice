#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
public:
    // virtual calculateIntrest();
    string account_holder_name;
    double account_number;
    double account_balance;
    double deposit_amount,withdraw_amount;

    void setDetails()
    {
        cout << "Enter Accouunt Number :- ";
        cin >> account_number;
        // cin.ingore();

        cout << "Enter Account Holder Name :- ";
        getline(cin , account_holder_name);

        cout << "Enter Accounnt Balance :- ";
        cin >> account_balance;
    }

    void Deposit()
    {
        cout << "Enter Amount To Deposit :- ";
        cin >> deposit_amount;
    }
    void Withdraw()
    {
        cout << "Your Current Balance Is :- " << account_balance << endl;
        cout << "Enter Amount To Withdraw :- ";
        cin >> withdraw_amount;
    }
    void getBalance()
    {
        cout << "Your Current Balance Is :- " << account_balance << endl;
    }
    void displayAccountInfo()
    {
        cout << "--------------------" << endl;
        cout << "Account Number :- " << account_number << endl;
        cout << "Account Holder Name :- " << account_holder_name << endl;
        cout << "Account Current Balance :- " << account_balance << endl;
        cout << "--------------------";
    }
};

class SavingsAccounts : public BankAccount
{
public:
    double intrest_rate;

    void calculateIntrest()
    {
        intrest_rate = (account_balance * 0.05) / 100;
        cout << "Your Bank Is Providing "<< intrest_rate <<" Rupees Of Intrest." << endl;
    }
};

class Overdraft : public BankAccount
{
public:
    int over_draft_limit;
    
    void checkOverdraft()
    {
        if (account_balance >= 0)
        {
            cout << "Your Account Is Not In OverDraft.";
        }
        else
        {
            cout << "Your Account Is OverDraft.";
        }
    }
};

class FixedDepositAccount : public BankAccount
{
public:
    int term;
    double fixed_deposit_intrest;

    void calculateIntrest()
    {
        cout << "Enter Time Duration (In Month's) :- ";
        cin >> term;
        fixed_deposit_intrest = (account_balance * 0.02);
        cout << "Your Bank Will Provide "<< fixed_deposit_intrest <<" Rupees Of Intrest In "<< term <<" Months." << endl;
    }
};

int main()
{
    BankAccount obj;
    obj.setDetails();
    int choice;
    do
    {
        cout << "----- Welome To BOB World -----" << endl;
        cout << "Enter 1 To Deposit Or Withdraw." << endl;
        cout << "Enter 2 For Savings Account." << endl;
        cout << "Enter 3 For Checking Account." << endl;
        cout << "Enter 4 For Fixed Deposit Account." << endl;
        cout << "Enter 0 To Exit." << endl;
        cout << "Enter Your Choice :- ";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                int choice_2;
                do {
                    cout << "Enter A To Deposit." << endl;
                    cout << "Enter 2 To Withdraw." << endl;
                    cout << "Enter 3 For Checking Balance" << endl;
                    cout << "Enter 4 For Accounts Detail's." << endl;
                    cout << "Enter 0 To Exit." << endl;
                    cout << "Enter Your Choice :- ";
                    cin >> choice_2;
    
                    switch (choice_2)
                    case 0:
                        cout << endl << "----- Program Is Scucessfully Exited -----" << endl;
                        break;
                    case A:
                        obj.Deposit();
                        break;
                    case 2:
                        obj.Withdraw();
                        break;
                    case 3:
                        obj.getBalance();
                        break;
                    case 4:
                        obj.displayAccountInfo();
                        break;
                    default:
                        cout << "Wrong Choice !!";
                        break;
            }
            while
            (choice_2 != 0)
            break;
        
        default:
                cout << "Wrong Choice !!";
                break;
        }
    }
    while
    (choice != 0);
    
    return 0;
}