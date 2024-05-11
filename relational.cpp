#include <iostream>
using namespace std;
// C++ Bangla Tutorials 24 : Even-Odd | Large-small | Pass-Fail | Absolute value
// C++ Bangla Tutorials 25 : Letter Grade program
// C++ Bangla Tutorials 27 : Vowel / Consonant program

int main()
{
    cout << "hello world ";
    int num;
    cout << "enter a number:";
    cin >> num;
    cout << endl;
    cout << "absolute number is :";

    if (num < 0)
    {
        cout << (-num);
    }
    else
    {
        cout << num;
    }
    cout << endl;

    int mark;
    cout << "enter a mark : ";
    cin >> mark;
    cout << endl;
    if (mark > 100 || mark < 0)
    {
        cout << "invalid number" << endl;
    }
    else if (mark >= 80)
    {
        cout << "A+" << endl;
    }
    else if (mark >= 70)
    {
        cout << "A" << endl;
    }
    else if (mark >= 60)
    {
        cout << "A-" << endl;
    }
    else if (mark >= 50)
    {
        cout << "B" << endl;
    }
    else if (mark >= 40)
    {
        cout << "C" << endl;
    }
    else if (mark >= 33)
    {
        cout << "D" << endl;
    }
    else
    {
        cout << "F" << endl;
    }

    return 0;
}