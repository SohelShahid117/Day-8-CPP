#include <iostream>
using namespace std;
// C++ Bangla Tutorials 24 : Even-Odd | Large-small | Pass-Fail | Absolute value
// C++ Bangla Tutorials 25 : Letter Grade program
// C++ Bangla Tutorials 27 : Vowel / Consonant program
// C++ Bangla Tutorials 28 : Vowel / Consonant program (part-2)

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
    if (mark >= 33)
    {
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
    }
    else
    {
        cout << "F" << endl;
    }

    char ch;
    cout << "enter a charecter" << endl;
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << ch << " is vowel";
    }
    else
    {
        cout << ch << " is consonant";
    }
    cout << endl;

    char ch2;
    cout << "enter a charecter again" << endl;
    cin >> ch2;
    ch2 = tolower(ch2);
    if (ch2 == 'a' || ch2 == 'e' || ch2 == 'i' || ch2 == 'o' || ch2 == 'u')
    {
        cout << ch2 << " is vowel";
    }
    else
    {
        cout << ch2 << " is consonant";
    }

    return 0;
}