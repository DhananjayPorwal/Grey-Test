#include <iostream>
using namespace std;
int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host :" << endl;
    cin >> hostUserNum;
    system("clear");
    cout << "Guest :" << endl;
    cin >> guestUserNum;
    // if (hostUserNum==guestUserNum)
    // {
    //     cout<<"You Won!"<<endl;
    // }
    // else
    // {
    //     cout<<"Failed!"<<endl;
    // }
    (hostUserNum == guestUserNum) ? cout << "You Won" : cout << "Failed!";
}