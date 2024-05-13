#include <iostream>
using namespace std;
// C++ Bangla Tutorials 39 : break and continue keyword
int main()
{
    cout << "Break" << endl;
    for (int i = 1; i <= 100; i++)
    {
        if (i == 10)
        {
            break;
        }
        cout << i << endl;
    }
    cout << "now continue" << endl;
    for (int i = 1; i <= 100; i++)
    {
        if (i >= 10 && i <= 90)
        {
            continue;
            ;
        }
        cout << i << endl;
    }
    return 0;
}