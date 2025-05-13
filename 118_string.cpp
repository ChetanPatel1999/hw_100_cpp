#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "enter sentance : ";
    getline(cin, s);
    int i, n = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            n++;
        }
    }
    string arr[n + 1], word;
    int j = 0;
    // my name is chetan
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            word.push_back(s[i]);
            if (i == s.length() - 1)
            {
                arr[j] = word;
            }
        }
        else
        {
            arr[j] = word;
            j++;
            word.clear();
        }
    }
    cout << "array word : " << endl;
    for (i = 0; i < (n + 1); i++)
    {
        cout << arr[i].length() << endl;
    }
    return 0;
}