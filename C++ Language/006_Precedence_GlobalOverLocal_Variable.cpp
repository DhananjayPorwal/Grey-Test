#include <iostream>
using namespace std;
int globalVar = 55;
int main()
{
    cout << globalVar << " is stored in Global Variable" << endl;
    globalVar = 214;
    cout << globalVar << ", this value indicates that Local-Variable precedence over Global-Variable"<< endl;
}
