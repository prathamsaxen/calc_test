#include <iostream>
using namespace std;

int main()
{
    char operation;
    int a, b;

    cout << "What you want to do?\n + \n -\n * \n /" << endl;
    cin >> operation;

    cout << "Enter Number A:";
    cin >> a;

    cout << "Enter Number B:";
    cin >> b;

    if (operation == '+')
    {
        cout << "A + B => " << a + b << endl;
    }
    else if (operation == '-')
    {
        cout << "A - B => " << a - b << endl;
    }
    else if (operation == '*')
    {
        cout << "A * B => " << a * b << endl;
    }
    else if (operation == '/')
    {
        cout << "A / B => " << a / b << endl;
    }
    else
    {
        cout << "Entered Operation is incorrect." << endl;
    }
    return 0;
}