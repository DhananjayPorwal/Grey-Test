#include <iostream>
using namespace std;
int main()
{
    float weight, height, bmi;
    cout << "Enter your weight(kg) and height(m)" << endl;
    cin >> weight >> height;
    bmi = weight / (height * height);
    if (bmi < 18.5)
    {
        cout << "Underweight" << endl;
    }
    else if (bmi > 25)
    {
        cout << "Overweight" << endl;
    }
    else
    {
        cout << "Normal weight" << endl;
    }
    cout << "Your BMI is :" << bmi << endl;
}