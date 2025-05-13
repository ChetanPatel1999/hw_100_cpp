//getline function used.
#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "enter string : ";
    // cin >> name;
    getline(cin, name);
    cout << "name : " << name << endl;
    return 0;
}