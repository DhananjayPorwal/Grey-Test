#include <iostream>
using namespace std;
void functionName()
{
    cout << "Hello from outer functions" << endl;
}

int main()
{
    functionName();
    cout << "Hello from main function" << endl;
    functionName();
}