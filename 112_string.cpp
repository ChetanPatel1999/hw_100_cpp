#include <iostream>
using namespace std;
int main()
{
    string city[5] = {"ujjain", "indore", "ratlam", "bhopal", "mahu"};
    int i;
    cout << "city names : \n";
    for (i = 0; i < 5; i++)
    {
        cout << city[i] << endl;
    }
    // cout << "city names with 6 charactor : \n";
    // for (i = 0; i < 5; i++)
    // {
    //     if (city[i].length() == 6)
    //     {
    //         cout << city[i] << endl;
    //     }
    // }
    cout << "city names with 6 charactor : \n";
    string s;
    int c, j;
    for (i = 0; i < 5; i++)
    {
        s = city[i];
        c = 0;
        for (j = 0; s[j] != '\0'; j++)
        {
            c++;
        }
        if (c == 6)
        {
            cout << city[i] << endl;
        }
    }
    return 0;
}