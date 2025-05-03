#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int[5];
    int i,*temp=ptr;
    *ptr = 12;
    ptr++;
    *ptr = 34;
    ptr++;
    *ptr = 38;
    ptr++;
    *ptr = 22;
    ptr++;
    *ptr = 44;
    ptr=temp;
    // for (i = 0; i < 5; i++)
    // {
    //     cout << ptr[i] << endl;
    // }
    // for (i = 0; i < 5; i++)
    // {
    //     cout << *ptr<< endl;
    //     ptr++;
    // }
    for (i = 0; i < 5; i++)
    {
        cout << *(ptr+i) << endl;
    }

    return 0;
}