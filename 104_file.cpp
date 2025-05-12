// read a file using open  method
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read;
    string s;
    read.open("mohit.txt");
    read >> s;
    cout << s << " ";
    read >> s;
    cout << s << " ";
    read.close();
    return 0;
}