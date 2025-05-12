// read one line from file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("mohit.txt");
    string s;
    getline(read, s);
    cout<<s;
    read.close();
    return 0;
}