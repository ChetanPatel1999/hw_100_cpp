// read a file using constructor
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("mohit.txt");
    string s;
    read >> s;
    cout << s << " ";
    read >> s;
    cout << s << " ";
    read.close();
    return 0;
}