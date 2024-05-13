#include <iostream>
using namespace std;
// C++ Bangla Tutorials 40 : Multiplication table
int main()
{
    int num;
    cout << "multipication table of -";
    cin >> num;
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << "x" << i << "=" << num * i << endl;
    }

    return 0;
}