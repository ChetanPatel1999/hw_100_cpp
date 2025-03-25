#include <iostream>
using namespace std;
int *cube_sq(int num)
{
    int c = num * num * num, sq = num * num;
    static int arr[] = {c, sq};
    return arr;
}
int main()
{
    int *res = cube_sq(3);
    cout << *res << endl;
    res++;
    cout << *res << endl;
    return 0;
}