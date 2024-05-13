#include <iostream>
// #include <conio.h>
using namespace std;
// Tutorials 37 : do while loop
int main()
{
    for (int i = 1; i <= 5; i++)
    {

        cout << "hello-" << i << endl;
    }

    int i = 1;
    while (i <= 5)
    {

        cout << "Bangladesh-" << i << endl;
        i++;
    }
    int j = 10;
    do
    {
        cout << "Chattogram-" << j << endl;
        j--;
    } while (j >= 5);
    // } while (j <= 5);
    return 0;
    // getch();
}