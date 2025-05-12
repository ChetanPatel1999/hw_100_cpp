// create a file using open method and write data inside file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create object of ofstream
    ofstream w;
    // open file or create file
    w.open("mohit.txt");
    w << "hello i am mohit" << endl;
    w << "who are you ?" << endl;
    w << "i am chetan ." << endl;
    // close file
    w.close();
    return 0;
}