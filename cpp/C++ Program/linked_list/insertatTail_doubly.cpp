#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next, *prev;
};
Node* head;
Node* tail;
void init()
{
    head = NULL;
    tail = NULL;
}
void insert_at_tail(int x){
    Node* newnode = new Node();
    newnode->val = x;
    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
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
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    init();
    while(1){
        int menu;
        cout<<"1. Insert at tail"<<endl<<"2. Print list"<<endl<<"-1 for exit!"<<endl;
        cin>>menu;
        if(menu==-1) break;
        if(menu==1){
            int x;
            cout<<"Insert at tail: ";
            cin>>x;
            insert_at_tail(x);
        }
        else if(menu==2) print();
    }

    return 0;
}
