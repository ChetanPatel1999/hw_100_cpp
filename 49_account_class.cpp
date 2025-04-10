#include <iostream>
using namespace std;
class account
{
    string ac_name;
    string ac_num;
    int belence;
    static int total_bank_belence;

public:
    static void create_account(account ac[], int index)
    {
        cout << endl
             << "enter coustomer name : ";
        cin >> ac[index].ac_name;
        cout << "set account number :";
        cin >> ac[index].ac_num;
        cout << "set initial belence : ";
        cin >> ac[index].belence;
        total_bank_belence = total_bank_belence + ac[index].belence;
        cout << endl
             << "account create succesfully ";
        cout << endl
             << endl;
    }
    static void accounts_display(account ac[], int index)
    {
        int i;
        if (index == 0)
        {
            cout << endl
                 << "frist create account than display" << endl
                 << endl;
        }
        for (i = 0; i < index; i++)
        {
            cout << endl
                 << "account info :" << endl;
            cout << "account holder name : " << ac[i].ac_name << endl;
            cout << "account number : " << ac[i].ac_num << endl;
            cout << "account belence : " << ac[i].belence << endl
                 << endl;
        }
    }
    static void account_display(account ac[], int index)
    {
        if (index == 0)
        {
            cout << endl
                 << "frist create account than display" << endl
                 << endl;
        }
        string number;
        int i, f = 0;
        cout << endl
             << "enter account number : ";
        cin >> number;
        for (i = 0; i < index; i++)
        {
            if (number == ac[i].ac_num)
            {
                f = 1;
                cout << endl
                     << "account info :" << endl;
                cout << "account holder name : " << ac[i].ac_name << endl;
                cout << "account number : " << ac[i].ac_num << endl;
                cout << "account belence : " << ac[i].belence << endl
                     << endl
                     << endl;
            }
        }
        if (f == 0)
        {
            cout << endl
                 << "no one account of this account number is present in our bank " << endl
                 << endl
                 << endl;
        }
    }
    static void display()
    {
        cout << endl
             << "total bank belence : " << total_bank_belence << endl
             << endl;
    }
    static void credit(account ac[], int index)
    {
        if (index == 0)
        {
            cout << endl
                 << "frist create account than credit ammount" << endl
                 << endl;
        }
        else
        {
            string number;
            int i, f = 0;
            cout << endl
                 << "enter account number : ";
            cin >> number;
            for (i = 0; i < index; i++)
            {
                if (number == ac[i].ac_num)
                {
                    f = 1;
                    int b;
                    cout << "enter credit ammount : ";
                    cin >> b;
                    ac[i].belence = ac[i].belence + b;
                    total_bank_belence = total_bank_belence + b;
                    cout << endl
                         << b << "credit succefully " << ac[i].ac_name << " account " << endl
                         << endl;
                }
            }
            if (f == 0)
            {
                cout << endl
                     << "you enter wrong account number" << endl
                     << endl;
            }
        }
    }
    static void debit(account ac[], int index)
    {
        if (index == 0)
        {
            cout << endl
                 << "frist create account than debit ammount" << endl
                 << endl;
        }
        else
        {
            string number;
            int i, f = 0;
            cout << endl
                 << "enter account number : ";
            cin >> number;
            for (i = 0; i < index; i++)
            {
                if (number == ac[i].ac_num)
                {
                    f = 1;
                    int b;
                    cout << "enter debit ammount : ";
                    cin >> b;
                    if (b < ac[i].belence)
                    {
                        ac[i].belence = ac[i].belence - b;
                        total_bank_belence = total_bank_belence - b;
                        cout << endl
                             << b << "debit succefully " << ac[i].ac_name << " account " << endl
                             << endl;
                    }
                    else
                    {
                        cout << endl
                             << ac[i].ac_name << " account not have sufficiant belence!" << endl;
                        cout << endl
                             << "your belence only :" << ac[i].belence << " rs " << endl
                             << endl;
                    }
                }
            }
            if (f == 0)
            {
                cout << endl
                     << "you enter wrong account number" << endl
                     << endl;
            }
        }
    }
};
int account::total_bank_belence = 0;
int main()
{
    account ac[10];
    int index = 0, num;
    while (1)
    {
        printf("welcome to my bank ! \n");
        printf("press 1 to open account\n");
        printf("press 2 to display accounts\n");
        printf("press 3 to display individual accounts\n");
        printf("press 4 to credit  ammount\n");
        printf("press 5 to debit  ammount\n");
        printf("press 6 to display total bank belence\n");
        printf("enter 7 to exit application\n");
        cout << "press any number : ";
        cin >> num;
        switch (num)
        {
        case 1:
            account::create_account(ac, index);
            index++;
            break;
        case 2:
            account::accounts_display(ac, index);
            break;
        case 3:
            account::account_display(ac, index);
            break;
        case 4:
            account::credit(ac, index);
            break;
        case 5:
            account::debit(ac, index);
            break;
        case 6:
            account::display();
            break;
        case 7:
            exit(0);
        default:
            cout << endl
                 << "please enter right number" << endl
                 << endl;
        }
    }
    return 0;
}