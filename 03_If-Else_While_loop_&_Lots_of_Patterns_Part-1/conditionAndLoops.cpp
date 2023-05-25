#include <iostream>
using namespace std;

int main()
{
    // int a;
    // cin >> a;

    // cout << "value of a is :" << a << endl;

    // if a is positive
    // if (a > 0)
    // {
    //     cout << "A is Positive" << endl;
    // }
    // else
    // {
    //     cout << "A is Negative" << endl;
    // }

    // int a, b;
    // cin >> a >> b;
    // cout << "value of a and b is " << a << " " << b << endl;

    int a, b;
    cout << "Enter the value of a " << endl;
    cin >> a;
    cout << "Enter the value of b " << endl;
    cin >> b;

    if (a > b)
    {
        cout << "a is greater " << endl;
    }

    if (b > a)
    {
        cout << "b is greater " << endl;
    }
}