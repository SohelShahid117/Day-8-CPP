#include <iostream>
using namespace std;
// C++ Bangla Tutorials 29 : Large / small number among 3 numbers
int main()
{
    // cout << "hi";
    int num1, num2, num3, large;
    cout << "enter 3 numbers : " << endl;
    cout << "num1 = ";
    cin >> num1;
    cout << endl;
    cout << "num2 = ";
    cin >> num2;
    cout << endl;
    cout << "num3 = ";
    cin >> num3;
    cout << endl;
    if (num1 > num2 && num1 > num3)
    {
        large = num1;
        // cout << num1 << " is large number" << endl;
    }
    if (num2 > num1 && num2 > num3)
    {
        large = num2;
        // cout << num2 << " is large number" << endl;
    }
    else
    {
        large = num3;
        // cout << num3 << " is large number" << endl;
    }
    cout << large << " is large number" << endl;
    return 0;
}