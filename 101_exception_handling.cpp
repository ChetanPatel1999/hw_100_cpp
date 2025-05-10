// multiple catch block in cpp langauge
#include <iostream>
using namespace std;
int main()
{
    char a = 'k';
    try
    {
        throw 12;
    }
    catch (int a)
    {
        cout << "integer catch block is run" << endl;
    }
    catch (float a)
    {
        cout << "float catch block is run" << endl;
    }
    catch (char a)
    {
        cout << "char catch block is run" << endl;
    }
    catch(...)
    {
        cout << "default catch block is run" << endl;
    }
    return 0;
}