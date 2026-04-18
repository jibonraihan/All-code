#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    int val;
    myStack *next;
    myStack(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(myStack *&head, myStack *&tail, int value)
{
    myStack *newnode = new myStack(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_link_list(myStack *head)
{
    myStack *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_reverse(myStack *temp)
{
    if (temp == NULL)
        return;
    print_reverse(temp->next);
    cout << temp->val << " ";
}
int main()
{
    myStack *head = NULL;
    myStack *tail = NULL;

    int value;
    while (1)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head, tail, value);
    }
    print_link_list(head);
    cout << endl;
    print_reverse(head);

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
        int value;
        Node* next;

    Node(int val)
    {
        this->value=val;
        this->next= NULL;
    };
};

void insert_at_tail(Node* &head, int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next=newnode;
}

void print_linked_list(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}

int main()
{
    Node* a= NULL;
    // Node* b= new Node(20);
    // Node* c= new Node(40);
    // a->next=b;
    // b->next=c;

    insert_at_tail(a,35);
    print_linked_list(a);
    insert_at_tail(a,90);
    return 0;
}
*/