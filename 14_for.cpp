// wap to print number given range.
#include <iostream>
using namespace std;
int main()
{
    int s, e, i;
    cout << "enter starting range :";
    cin >> s;
    cout << "enter ending range :";
    cin >> e;
    if (s < e)
    {
        printf("forward number : ");
        for (i = s; i <= e; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "reverse number : ";
        for (i = s; i >= e; i--)
        {
            cout << i << " ";
        }
    }
    return 0;
}