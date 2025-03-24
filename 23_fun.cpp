#include <iostream>
using namespace std;
void pattern()
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    pattern();
    cout << "name : chetan patel" << endl;
    pattern();
    cout << "fname : singaram patel" << endl;
    pattern();
    cout << "collage : IIST" << endl;
    pattern();
    return 0;
}