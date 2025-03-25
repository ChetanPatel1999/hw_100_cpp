#include <iostream>
using namespace std;
char upper(char ch) // m
{
    return ch >= 'a' && ch <= 'z' ? ch - 32 : ch;
}
// a=97 b=98  A=65 B=66
int main()
{
    cout << "upper char of 'm' : " << upper('m') << endl;
    cout << "upper char of 'e' : " << upper('e') << endl;
    cout << "upper char of j' : " << upper('j') << endl;
    cout << "upper char of k' : " << upper('K') << endl;
    cout << "upper char of @' : " << upper('@') << endl;
    return 0;
}