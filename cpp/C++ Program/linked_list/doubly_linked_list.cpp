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
void insert_at_head(int x){
    Node* newnode = new Node();
    newnode->val = x;
    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
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

void insert_at_any_pos(int val, int pos){
    if(head==NULL || pos < 1) {
        cout<<"List empty or Invalid position."<<endl;
        return;
    }
    if(pos==1){
        insert_at_head(val);
        return;
    }
    Node *newnode = new Node();
    newnode->val = val;
    Node* temp = head;
    for(int i=1; i<pos-1; i++){
        if(temp->next==NULL){
            cout<<"Postion out of range!"<<endl;
            return;
        }
        temp = temp->next;
    }
    if(temp->next==NULL){
        insert_at_tail(val);
        return;
    }
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;
}
void delete_at_head(){
    if(head==NULL){
        cout<<"List empty!"<<endl;
        return;
    }
    Node* del= head;
    head=head->next;
    if(head==NULL) {
        tail=NULL;
        return;
    }
    head->prev=NULL;
    delete del;
}
void delete_at_tail(){
    if(head==NULL){
        cout<<"List empty!"<<endl;
        return;
    }
    Node* del= tail;
    tail=tail->prev;
    if(tail==NULL) 
    {
        head=NULL;
        return;
    }
    tail->next=NULL;
    delete del;
}
void delete_at_any_pos(int pos){
     if(head==NULL || pos < 1) {
        cout<<"List empty or Invalid position."<<endl;
        return;
    }
    if(pos==1){
        delete_at_head();
        return;
    }
    Node* temp = head;
    for(int i=1; i<pos-1; i++){
        if(temp->next==NULL){
            cout<<"Position out of range!"<<endl;
            return;
        }
        temp = temp->next;
    }
    if(temp->next==tail){
        delete_at_tail();
        return;
    }
    Node* del = temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete del;
}
void delete_value(int value){
    if(head==NULL){
        cout<<"List empty!"<<endl;
        return;
    }
    Node* temp=head;
    while(temp->val!=value){
        if(temp->next==NULL){
            cout<<"End of list, value not found."<<endl;
            return;
        }
        temp = temp->next;
    }
    if(temp==head){
        delete_at_head();
        return;
    }
    if(temp==tail){
        delete_at_tail();
        return;
    }
    Node* del = temp;
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete del;
}
int size(){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    } 
    return count;
}
int search_value(int value){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        if(temp->val==value){
            count++;
        }
        temp=temp->next;
    }
    return count;
}
void reverse_list(){
    for(Node* i=head, *j=tail; i!=j && j!=i->prev ; i=i->next, j=j->prev){
        swap(i->val,j->val);
    }
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
        cout<<"1. Insert at head"<<endl
        <<"2. Insert at tail"<<endl
        <<"3. Insert at any position"<<endl
        <<"4. Delete at head"<<endl
        <<"5. Delete at tail"<<endl
        <<"6. Delete at any position"<<endl
        <<"7. Delete a Node of value"<<endl
        <<"8. Size of the list"<<endl
        <<"9. Print list"<<endl
        <<"10. Find value"<<endl
        <<"11. Reverse list"<<endl
        <<"-1 for exit!"<<endl;
        cin>>menu;
        if(menu==-1) break;
        else if(menu==1){
            int x;
            cout<<"Insert at head: ";
            cin>>x;
            insert_at_head(x);
        }
        else if(menu==2){
            int x;
            cout<<"Insert at tail: ";
            cin>>x;
            insert_at_tail(x);
        }
        else if(menu==3){
            int x,pos;
            cout<<"position: ";
            cin>>pos;
            cout<<"value: ";
            cin>>x;
            insert_at_any_pos(x, pos);
        }
        else if(menu==4){
            delete_at_head();
        }
        else if(menu==5){
            delete_at_tail();
        }
        else if(menu==6){
            int x;
            cout<<"Delete node at position: ";
            cin>>x;
            delete_at_any_pos(x);
        }
        else if(menu==7){
            int x;
            cout<<"Delete node of value: ";
            cin>>x;
            delete_value(x);
        }
        else if(menu==8){
            cout<<"Size of the list is: "<<size()<<endl;
        }
        else if(menu==9) print();
        else if(menu==10){
            int x;
            cout<<"Find a value of: ";
            cin>>x;
            cout<<"Value "<<x<<" found of "<<search_value(x)<<" times."<<endl;
        } 
        else if(menu==11){
            reverse_list();
        } 
    }

    return 0;
}
