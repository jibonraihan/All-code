#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    string val;
    myStack *next;
    myStack *prev;

    myStack(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_in_tail(myStack *&head, myStack *&tail, string val)
{
    myStack *newnode = new myStack(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void visit(myStack *head, myStack *&pos, string n)
{
    myStack *temp = head;
    bool found = false;
    while (temp != NULL)
    {
        if (temp->val == n)
        {
            found = true;
            break;
        }
        temp = temp->next;
    }
    if (found)
    {
        cout << temp->val << endl;
        pos = temp;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}
void prev(myStack *head, myStack *&pos)
{
    if (pos->prev == NULL || pos == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        pos = pos->prev;
        cout << pos->val << endl;
    }
}
void next(myStack *head, myStack *&pos)
{
    if (pos->next == NULL || pos == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        pos = pos->next;
        cout << pos->val << endl;
    }
}

int main()
{
    myStack *head = NULL;
    myStack *tail = NULL;
    myStack *pos = head;
    string ss;
    while (1)
    {
        cin >> ss;
        if (ss == "end")
            break;
        insert_in_tail(head, tail, ss);
    }
    int t;
    cin >> t;
    while (t--)
    {
        string string1, string2;
        cin >> string1;
        if (string1 == "visit")
        {
            cin >> string2;
            visit(head, pos, string2);
        }
        else if (string1 == "prev")
            prev(head, pos);

        else
            next(head, pos);
    }

    return 0;
}