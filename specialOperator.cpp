#include <iostream>
using namespace std;
// C++ Bangla Tutorials 19 : special operator

int main()
{
    // cout << "hello world";

    int a;
    float b;
    double c;
    char d;
    char name[20];

    // int sizeee = sizeof(a);  //4
    // int sizeee = sizeof(b);  //4
    // int sizeee = sizeof(c);  //8
    // int sizeee = sizeof(d);  //1
    int sizeee = sizeof(name); // 20
    cout << sizeee << endl;

    int num1, num2, sum;
    sum = (num1 = 2, num2 = 3, sum = num1 + num2);
    cout << sum;

    return 0;
}
