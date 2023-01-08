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
void print(node* &head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* takeinput()
{
    int data;
    cin>>data;
    node* head=NULL;
    // node* tail=NULL;
    node* temp=NULL;

while(data!=-1)
{
 node* n= new node(data);
//  node* temp=head;
 if(head==NULL)
 {
    head=n;
    // tail=n;
    temp=n;
 }
else
{
    // tail->next=n;
    // tail=tail->next;
    temp->next=n;
    temp=temp->next;
}
cin>>data;
}
return head;
}

//Insert at Head
void insertathead(node*&head)
{
    int data;
    cin>>data;
    node* temp=new node(data);
    temp->next=head;
    head=temp;
}

int main()
{ 
    cout<<"Enter element in linked list and enter -1 for stop\n";
    node* head=takeinput();
    print (head);
    cout<<"\nEnter element that you want to enter at head\n";
    insertathead(head);
    print (head);
    return 0;
}