#include <bits/stdc++.h>
using namespace std;
int uid[6] = {100255, 100288, 100532, 200337, 201044, 209054};
float bala_id[6] = {0.0};

float check_balance(int id)
{
    for (int i = 0; i < 6; i++)
    {
        if (id == uid[i])
            return bala_id[i];
    }
}
float deposite_money(int id, float tk)
{
    for (int i = 0; i < 6; i++)
    {
        if (id == uid[i])
            return bala_id[i] += tk;
    }
}
float withdraw_money(int id, float tk)
{
    for (int i = 0; i < 6; i++)
    {
        if (id == uid[i])
            return bala_id[i] -= tk;
    }
}
float transfer_money(int f_id, int s_id, float tk)
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i != j)
            {
                if (f_id == uid[i] && s_id == uid[j])
                {
                    bala_id[j] += tk;
                    return bala_id[i] -= tk;
                }
            }
        }
    }
}
int check_uid(int id)
{
    if (id == 100255 || id == 100288 || id == 100532 || id == 200337 || id == 201044 || id == 209054)
        return 1;
    else
        return 0;
}
float check_suffi_balance(int id, float tk)
{
    for (int i = 0; i < 6; i++)
    {
        if (id == uid[i] && bala_id[i] < tk)
            return bala_id[i];
    }
}
int main()
{

    while (1)
    {
        int option;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposite Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Transfer Money" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option: ";
        cin >> option;
        if (option == 1)
        {
            int id;
            cout << endl
                 << "Enter your id: ";
            cin >> id;
            int found = check_uid(id);
            if (found)
            {
                float balance = check_balance(id);
                cout << "Your balance is: " << balance << endl;
            }
            else
            {
                cout << "You have no account on this id." << endl;
                break;
            }
        }

        else if (option == 2)
        {
            int id;
            float amount;
            cout << "Enter your account id: ";
            cin >> id;
            cout << "Enter deposite amount: ";
            cin >> amount;
            int found = check_uid(id);
            if (found)
            {
                float deposite = deposite_money(id, amount);
                cout << "Deposite tk " << amount << " on your account.";
                cout << " Your new balance is: " << deposite << endl;
            }
            else
            {
                cout << "You have no account on this id." << endl;
                break;
            }
        }

        else if (option == 3)
        {
            int id;
            float amount;
            cout << "Enter your account id: ";
            cin >> id;
            cout << "Enter withdraw amount: ";
            cin >> amount;
            int found = check_uid(id);
            if (found)
            {
                float zero_balance = check_suffi_balance(id, amount);
                if (zero_balance < amount)
                {
                    cout << "Your balance is " << zero_balance << ". You can't withdraw money" << endl;
                }
                else
                {
                    float withdraw = withdraw_money(id, amount);
                    cout << "Withdraw money: " << amount << " tk. Your new balance is : " << withdraw << " tk." << endl;
                }
            }
            else
            {
                cout << "You have no account on this id." << endl;
                break;
            }
        }

        else if (option == 4)
        {
            int id1, id2;
            float amount;
            cout << "Enter your account id: ";
            cin >> id1;
            cout << "Enter transfer account id: ";
            cin >> id2;
            cout << "Enter transfer amount: ";
            cin >> amount;
            int found_id1 = check_uid(id1);
            int found_id2 = check_uid(id2);
            if (found_id1 && found_id2)
            {
                int zero_balance = check_suffi_balance(id1, amount);
                if (zero_balance < amount)
                {
                    cout << "Your balance is " << zero_balance << " tk. You can't transfer money" << endl;
                }
                else
                {
                    float transfer = transfer_money(id1, id2, amount);
                    cout << "Transfer money: " << amount << " tk. Your new account balance is: " << transfer << " tk." << endl;
                }
            }
            else
            {
                cout << "You have no account on this id." << endl;
                break;
            }
        }
        else if (option == 5)
        {
            break;
        }
    }
    return 0;
}