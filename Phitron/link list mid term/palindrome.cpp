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

void insert_in_tail(myStack *&head, myStack *&tail, int val)
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
    ;
}
void copy(myStack *head, myStack *&newhead, myStack *&newtail)
{

    myStack *temp = head;
    while (temp != NULL)
    {
        insert_in_tail(newhead, newtail, temp->value);
        temp = temp->next;
    }
}
void revers(myStack *&newhead, myStack *&newtail)
{
    myStack *temp1 = newhead;
    myStack *temp2 = newtail;
    while (temp1->next != temp2->next && temp1->prev != temp2)
    {
        swap(temp1->value, temp2->value);
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }
}
bool check_palidrome(myStack *head, myStack *newhead)
{
    myStack *temp1 = head;
    myStack *temp2 = newhead;
    while (temp1 != NULL)
    {
        if (temp1->value != temp2->value)
            return false;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
}

int main()
{
    myStack *head = NULL;
    myStack *tail = NULL;
    myStack *newhead = NULL;
    myStack *newtail = NULL;
    int n;
    while (1)
    {
        cin >> n;
        if (n == -1)
            break;
        insert_in_tail(head, tail, n);
    }
    copy(head, newhead, newtail);
    revers(newhead, newtail);
    bool flag = check_palidrome(head, newhead);
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}