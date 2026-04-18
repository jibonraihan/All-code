#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    int value;
    myStack *next;
    myStack *prev;
    myStack(int val)
    {
        this->value = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert(myStack *&head, myStack *&tail, int index, int val, bool &flag, int &size)
{
    if (index > size)
    {
        flag = true;
        return;
    }
    myStack *newnode = new myStack(val);
    if (index == 0)
    {
        newnode->next = head;
        if (head != NULL)
        {
            head->prev = newnode;
        }
        head = newnode;
        if (tail == NULL)
        {
            tail = newnode;
        }
    }
    else if (index == size)
    {
        newnode->prev = tail;
        if (tail != NULL)
        {
            tail->next = newnode;
        }
        tail = newnode;
        if (head == NULL)
        {
            head = newnode;
        }
    }
    else
    {
        myStack *temp = head;
        for (int i = 0; i < index; ++i)
        {
            temp = temp->next;
        }

        newnode->next = temp;
        newnode->prev = temp->prev;

        if (temp->prev != NULL)
        {
            temp->prev->next = newnode;
        }
        temp->prev = newnode;
    }

    size++;
}
void print_rev(myStack *tail)
{
    myStack *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
}
void print(myStack *head, myStack *tail, bool &flag)
{
    if (flag == true)
    {
        cout << "Invalid";
        flag = false;
        return;
    }
    myStack *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
    print_rev(tail);
}

int main()
{
    myStack *head = NULL;
    myStack *tail = NULL;
    bool flag = false;
    int n, size = 0;
    cin >> n;
    while (n--)
    {
        int ind, val;
        cin >> ind >> val;
        insert(head, tail, ind, val, flag, size);

        print(head, tail, flag);
        cout << endl;
    }

    return 0;
}