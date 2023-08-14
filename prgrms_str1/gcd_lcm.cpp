#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
int main()
{

    int a = 2;
    int b = 20;

    cout << lcm(99, 2) << endl;

    return 0;
}