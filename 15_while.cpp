// wap to convert binary to decimal number.
#include <iostream>
using namespace std;
int main()
{
    int b, rem, d = 0, n = 1;
    cout << "enter binary : ";
    cin >> b; // 1010
    while (b > 0)
    {
        rem = b % 10;
        d = d + (rem * n); // 1
        n = n * 2;         // 4
        b = b / 10;
    }
    cout << "decimal number : " << d << endl;

    return 0;
}