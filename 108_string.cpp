#include <iostream>
using namespace std;
int main()
{
    //  string name = "my name is chetan patel";
    string name("my name is chetan patel");
    int i;
    cout << "name : " << name << endl;
    cout << name[0] << endl;
    cout << name[1] << endl;
    cout << name[2] << endl;
    cout << "------------------------\n";
    // chetan patel
    for (i = 0; name[i] != '\0'; i++) // 12
    {
        cout << name[i];
        if (name[i + 1] == ' ' || name[i] == ' ' || name[i + 1] == '\0')
        {
        }
        else
        {
            cout << "-";
        }
    }
    return 0;
}