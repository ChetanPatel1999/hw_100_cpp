#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int[5];
    int i, *temp = ptr;
    cout << "enter array element : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> *ptr;
        ptr++;
    }
    // for (i = 0; i < 5; i++)
    // {
    //     cin>>ptr[i];
    // }
    ptr = temp;
    cout << "display array element : " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << endl;
    }
    ptr = temp;
    delete ptr;
    return 0;
}