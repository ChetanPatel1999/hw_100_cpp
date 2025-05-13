// some method of string class
#include <iostream>
using namespace std;
int main()
{
    string s1 = "shyam";
    string s2 = "patidar";
    // s1+=s2;
    s1.append(s2);
    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}