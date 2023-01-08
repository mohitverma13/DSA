#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void print(node*&head)
{
    node* temp=head;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
void insertathead(node* &head)
{
    cout<<"\n\nThis is insert at head\n";
    int data;
    cout<<"Enter data that you want  to insert at head\n";
    cin>>data;
    node* temp=new node(data);
    temp->next=head;
    head=temp;
}
void insertattail(node*&head )
{
    cout<<"\n\nThis is insert at tail\n";
    int data ;
    cout<<"Enter element\n";
    cin>>data;
    node* n=new node(data);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n; 
}
void inseratposition(node*&head)
{
    cout<<"\n\nEnter datails to insert at any position\n";
    int data,pos;
    cout<<"Enter position\n";
    cin>>pos;
    cout<<"Enter Value\n";
    cin>>data;

    node* temp=head;

    if(pos==1)
    {
        insertathead(head);
        return;
    }
    if(temp->next==NULL)
    {
        insertattail(head);
        return ;
    }
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    node* nodetoinsert =new node (data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}
node* input()
{
    int data;
    cin>>data;
    node* head=NULL;
    node* temp=NULL;
    while(data!=-1)
    {
        node* n=new node(data);
        if(head==NULL)
        {
            head=n;
            temp=n;
        }
        else 
        {
            temp->next=n;
            temp=temp->next;
        }
        cin>>data;
    }
    return head;
}
int main()
{ 
    // node*head=NULL;  this is in case when linked list is empty and we want to insert at head
    cout<<"\nEnter elements of Linked list\n\n";
    node* head=input();
    print(head);
    insertathead(head);
    print(head);
    insertattail(head);
    print(head);
    inseratposition(head);
    print(head);
    
    return 0;
}