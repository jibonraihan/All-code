#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *next;
};
Node *head, *tail;

void init()
{
    head = NULL;
    tail = NULL;
}

void insertAtFirst(int x)
{
    Node *temp = new Node();
    temp->key = x;

    temp->next = head;
    head = temp;
    if (tail == NULL)
        tail = temp;
}

void insertAtLast(int x)
{
    Node *temp = new Node();
    temp->key = x;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(int pos, int x)
{
    if (pos == 1)
    {
        insertAtFirst(x);
        return;
    }
    if (head == NULL)
    {
        cout << "Out of bounds!" << endl;
        return;
    }
    Node *newnode = new Node();
    newnode->key = x;

    Node *tmp = head;
    for (int i = 1; i < pos - 1 && tmp != NULL; i++)
    {
        tmp = tmp->next;
    }
    if (tmp == NULL)
    {
        cout << "Out of bounds!" << endl;
        return;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    if (newnode->next == NULL)
        tail = newnode;
}
void print()
{
    Node *temp = head;
    if (temp == NULL)
        cout << "List empty!" << endl;
    else
        cout << "List is: ";
    while (temp != NULL)
    {
        cout << temp->key << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position)
{
    if (position <= 0 || head == NULL)
    {
        cout << "Can't delete!" << endl;
        return;
    }
    if (position == 1)
    {
        Node *d = head;
        head = head->next;
        delete d;
        if (head == NULL)
            tail = NULL;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    Node *d = temp->next;
    temp->next = d->next;
    if (d == tail)
        tail = temp;
    delete d;
}
void deleteValue(int value)
{
    if (head == NULL)
    {
        cout << "List empty!" << endl;
        return;
    }
    else if (head->key == value)
    {
        Node *del = head;
        head = head->next;

        tail = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL && temp->next->key != value)
        temp = temp->next;

    if (temp->next == NULL)
    {
        cout << "Value not in list" << endl;
        return;
    }
    Node *d = temp->next;
    temp->next = d->next;
    if (d == tail)
        tail = temp;
    delete d;
}
int countNode()
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int isDuplicate()
{
    if (head == NULL)
    {
        cout << "List empty!" << endl;
        return 0;
    }
    Node *i, *j;
    for (i = head; i != tail; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {

            if (i->key == j->key)
            {
                return 1;
            }
        }
    }
    return 0;
}
bool searchValue(int value)
{
    if (head == NULL)
    {
        cout << "List empty!" << endl;
        return 0;
    }
    Node *i;
    for (i = head; i != NULL; i = i->next)
    {
        if (i->key == value)
            return 1;
    }
    return 0;
}
void reversePrint(Node *temp)
{
    if (temp == NULL)
        return;
    reversePrint(temp->next);
    cout << temp->key << " ";
}
Node* findMiddle(){
    Node* fast=head, *slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
void deleteAtHead(){
    if(head==NULL){
        cout<<"List empty!"<<endl;
        return;
    }
    Node* del=head;
    head=head->next;
    delete del;
}
void deleteAtTail(){
    if(head==NULL){
        cout<<"List empty!"<<endl;
        return;
    }
    Node *temp=head;
    while(temp->next!=tail) temp=temp->next;
    Node* del = temp->next;
    temp->next=temp->next->next;
    delete del;
    tail=temp;
}

int main()
{
    //cout << "Hello Raihan" << endl;
    init();
    while (1)
    {
        int menu;
        // cout << "1-> Insert at first."<<endl;
        // cout << "2-> Insert at last."<<endl;
        // cout << "3-> Insert at position."<<endl;
        // cout << "4-> Delete at head."<<endl;
        // cout << "5-> Delete at tail."<<endl;
        // cout << "6-> Delete at position."<<endl;
        // cout << "7-> Delete value."<<endl;
        // cout << "8-> Number of Node."<<endl;
        // cout << "9-> Print linkedlist."<<endl;
        // cout << "10-> Finding Duplicate."<<endl;
        // cout << "11-> Searching value"<<endl;
        // cout << "12-> Reverse print linkedlist."<<endl;
        // cout << "13-> Find middle of the linkedlist."<<endl;
        // cout << "0-> Exists!"<<endl;
        cout << "Enter your choice: ";
        cin >> menu;
        if (menu == 1)
        {
            int x;
            cout << "Insert at first: ";
            cin >> x;
            insertAtFirst(x);
        }
        else if (menu == 2)
        {
            int x;
            cout << "Insert at last: ";
            cin >> x;
            insertAtLast(x);
        }
        else if (menu == 3)
        {
            int pos, x;
            cout << "Insert at position: ";
            cin >> pos;
            cout << "Insert value: ";
            cin >> x;
            insertAtPosition(pos, x);
        }
        else if(menu==4){
            deleteAtHead();
        }
        else if(menu==5){
            deleteAtTail();
        }
        else if (menu == 6)
        {
            int x;
            cout << "Delete Node at position: ";
            cin >> x;
            deleteNode(x);
        }
        else if (menu == 7)
        {
            int x;
            cout << "Delete Node of value: ";
            cin >> x;
            deleteValue(x);
        }
        else if (menu == 8)
        {
            cout << "there is: " << countNode() << " Node." << endl;
        }
        else if (menu == 9)
        {
            print();
        }
        else if (menu == 10)
        {
            int x = isDuplicate();
            if (x == 1)
                cout << "Duplicate found!" << endl;
            else
                cout << "No duplicate!" << endl;
        }
        else if (menu == 11)
        {
            int x;
            cout << "Enter search value: ";
            cin >> x;
            if (searchValue(x) == 1)
                cout << "Value " << x << " is found." << endl;
            else
                cout << "Value " << x << " is not found." << endl;
        }
        else if (menu == 12)
        {
            if (head == NULL)
            {
                cout << "List empty!" << endl;
            }
            else {
                cout<<"List is: ";
                reversePrint(head);
            }
            cout << endl;
        }
        else if(menu==13){
            if(head==NULL) cout<<"List empty!"<<endl;
            else{

                Node* mid=findMiddle();
                cout<<"Middle of the list: "<<mid->key<<endl;
            }
        }
        else if (menu == 0)
            break;
    }
}