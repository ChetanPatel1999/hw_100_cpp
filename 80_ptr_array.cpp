#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr, i;
    ptr = &arr[0];          // 400
    for (i = 0; i < 5; i++) // 2
    {
        cout << *ptr << endl; // 56
        ptr++;                // 420
    }
    int sum = 0;
    ptr=arr;//400
    for (i = 0; i < 5; i++) // 2
    {
        sum = sum + *ptr;
        ptr++;
    }
    cout << "sum of all element : " << sum << endl;
    return 0;
}