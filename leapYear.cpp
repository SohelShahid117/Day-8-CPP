#include <iostream>
using namespace std;
int main()
{
    /* Every year that is exactly divisible by four is a leap year, except for years that are exactly divisible by 100, but these centurial years are leap years if they are exactly divisible by 400. For example, the years 1700, 1800, and 1900 are not leap years, but the years 1600 and 2000 are. */
    // C++ Bangla Tutorials 30 : Leap Year program
    cout << "hello";
    int year;
    cout << "enter a yera : ";
    cin >> year;
    cout << endl;
    // if (year % 4 == 0 && year % 100 != 0)
    // {
    //     cout << year << " is leapyear" << endl;
    // }
    // else if (year % 400 == 0)
    // {
    //     cout << year << " is leapyear" << endl;
    // }
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is leapyear" << endl;
    }
    else
    {
        cout << year << " is not leapyear" << endl;
    }
    return 0;
}