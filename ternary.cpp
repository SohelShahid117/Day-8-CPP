#include <iostream>
using namespace std;
// Tutorials 32 : conditional operator / Ternary Operator
int main()
{
    cout << "hello" << endl;
    int x = 5;
    int y = 10;
    int large = x > y ? x : y;
    cout << large << endl;

    int num = 5;
    num % 2 == 0 ? cout << num << " even" : cout << num << " odd" << endl;
    return 0;
}