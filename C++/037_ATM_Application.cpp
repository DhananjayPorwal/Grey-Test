#include <iostream>
using namespace std;
void showMenu()
{
    cout<<endl;
    cout << "**********Menu**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
}

int main()
{
    int option;
    double balance = 50000;
    do
    {
        showMenu();
        cout << "Option:";
        cin >> option;
        system("clear");
        switch (option)
        {
        case 1:
            cout << "Available balance is : ₹ " << balance<< endl;
            break;
        case 2:
            cout << "Deposite Amount :";
            double depositeAmount;
            cin >> depositeAmount;
            cout << endl;
            balance += depositeAmount;
            break;
        case 3:
            cout << "Withdraw Amount :";
            double withdrawAmount;
            cin >> withdrawAmount;
            cout << endl;
            if (withdrawAmount <= balance)
            {
                balance -= withdrawAmount;
            }
            else
            {
                cout << "Not enough money" << endl;
            }
            break;
        }
    } while (option != 4);
}