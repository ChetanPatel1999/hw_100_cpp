// array in cpp language
// wap to take array element form user and display their sum.
#include <iostream>
using namespace std;
int main()
{
    int arr[5], i;
    cout << "enter array element : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "array element are : " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    // 12 4 6 3 7
    // code for sum of all array element
    int sum=0;
    for (i = 0; i < 5; i++)//2
    {
        sum = sum + arr[i];//22
    }
    cout<<endl<<"sum of all array element is : "<<sum<<endl;
    return 0;
}