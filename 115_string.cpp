#include <iostream>
using namespace std;
int main()
{
    string s = "helloll";
    cout << s << endl;
    s.push_back('g');
    cout << s << endl;
    string m;
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == 'l')
        {
            m.push_back(s[i]);
        }
    }
    cout<<"m : "<<m<<endl;
    return 0;
}