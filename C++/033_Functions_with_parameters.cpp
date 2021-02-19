#include <iostream>
using namespace std;
void ramFunction(string user, string city = "Ayodhaya", int age = 0)
{
    cout << "Hello Reader, My name is " << user << endl;
    cout << "I am from " << city << endl;
    if (age != 0)
    {
        cout << "I am " << age << " year old" << endl;
    }
}
int main()
{
    // ramFunction("Dhananjay", "Indore", 20);
    // ramFunction("Avinash");
    string name, city;
    int age;
    cout << "Name : ";
    cin >> name;
    cout << "City : ";
    cin >> city;
    cout << "Age : ";
    cin >> age;
    ramFunction(name, city ,age);
}