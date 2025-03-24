// restorent bill generate by cpp programm
#include <iostream>
using namespace std;
int main()
{
    cout << "welcome to my restorent " << char(1) << endl;
    cout << "_____________________________" << endl;
    int num, price[10], it_count = 0, i;
    string item[10];
    for (;;)
    {
        cout << "press 1 for dal bati : 120" << endl;
        cout << "press 2 for paneer : 150" << endl;
        cout << "press 3 for roti : 12" << endl;
        cout << "press 4 for sav tamater : 100" << endl;
        cout << "press num : ";
        cin >> num;
        switch (num)
        {
        case 1:
            cout << "your dal bati is orderd" << endl;
            item[it_count] = "dal bati";
            price[it_count] = 120;
            it_count++;
            break;
        case 2:
            cout << "your paneer is orderd" << endl;
            item[it_count] = "paneer";
            price[it_count] = 150;
            it_count++;
            break;
        case 3:
            cout << "your roti is orderd" << endl;
            item[it_count] = "roti";
            price[it_count] = 12;
            it_count++;
            break;
            break;
        case 4:
            cout << "your sav tamater is orderd" << endl;
            item[it_count] = "sav tamater";
            price[it_count] = 100;
            it_count++;
            break;
        default:
            cout << "please enter 1 to 4 number";
        }
        cout << "you want to order some thing more  so press 1 : ";
        cin >> num;
        if (num != 1)
        {
            break;
        }
    }
    cout << "______________________________" << endl;
    cout << " your bill " << char(1) << " " << char(1) << endl;
    cout << "______________________________" << endl;
    cout << "item              price" << endl;
    int total_bill = 0;
    for (i = 0; i < it_count; i++)
    {
        cout << item[i] << "             " << price[i] << endl;
        total_bill = total_bill + price[i];
    }
    cout << "_______________________________________" << endl;
    cout << "total bill : " << total_bill << endl;
    return 0;
}