#include<bits/stdc++.h>    
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(node*&head){
    node* temp=head;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
void insertathead(node* &head){
    cout<<"\nThis is insert at head\n";
    int data;
    cout<<"Enter data that you want  to insert at head\n";
    cin>>data;
    node* temp=new node(data);
    temp->next=head;
    head=temp;
}
void insertattail(node*&head ){
    cout<<"\nThis is insert at tail\n";
    int data ;
    cout<<"Enter element\n";
    cin>>data;
    node* n=new node(data);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n; 
}
void inseratposition(node*&head){
    cout<<"Enter datails to insert at any position\n";
    int data,pos;
    cout<<"Enter position\n";
    cin>>pos;
    cout<<"Enter Value\n";
    cin>>data;

    node* temp=head;

    if(pos==1){
        insertathead(head);
        return;
    }
    if(temp->next==NULL){
        insertattail(head);
        return ;
    }
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    node* nodetoinsert =new node (data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
void deleteathead(node*&head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletes(node*&head){
    int data;
    cout<<"Enter value to delete\n";
    cin>>data;
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);
        return;
    }
    node*temp=head;
    while(temp->next->data!=data){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
bool search(node*&head){
    cout<<"Enter value to be searched\n";
    int val;
    cin>>val;
    node* temp=head;
    if(head==NULL){
        return false;
    }
    while(temp!=NULL){
        if(temp->data==val)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
node* input(){
    int data;
    cin>>data;
    node* head=NULL;
    node* temp=NULL;
    while(data!=-1){
        node* n=new node(data);
        if(head==NULL){
            head=n;
            temp=n;
        }
        else {
            temp->next=n;
            temp=temp->next;
        }
        cin>>data;
    }
    return head;
}
int main(){
    cout<<"Enter Elements of Linked List\n";
    node* head=input();
    int ch;
    cout<<"1.Insert Element\n";
    cout<<"2.Delete a elemnt\n";
    cout<<"3.Search a elemnt\n";
    cout<<"4.Display Linked list\n";
    cout<<"choice : ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        inseratposition(head);
        print(head);
        break;
        case 2:
        deletes(head);
        print(head);
        break;
        case 3:
        if(search(head))
        {
            cout<<"Element Present\n";
        }
        else
        {
            cout<<"Element not present\n";
        }
        break;
        case 4:
        print(head);
        break;
        default: cout<<"Invalid Choice\n";
    }
      return 0;
}