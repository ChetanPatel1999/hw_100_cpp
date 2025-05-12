// open and create a file using constructor
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream write("jaya.txt");
    write << "hi i am jaya " << endl;
    write << "i am student of holker" << endl;
    write.close();
    return 0;
}