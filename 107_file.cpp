// read all data from file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("mohit.txt");
    string s;
    while (read.eof() != 1)
    {
        getline(read, s);
        cout << s << endl;
    }
    read.close();
    return 0;
}