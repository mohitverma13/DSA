#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
node* input(){
    int data;
    cin>>data;
    node* head=NULL;
    node*temp=NULL;
    while(data!=-1){
        node* n=new node(data);
        if(head==NULL)
        {
            head=n;
            temp=n;
        }
        else{
            temp->next=n;
            temp=temp->next;
        }
        cin>>data;
    }
    return head;
    
}
void display(node*&head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"--->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

void makeintersection(node*&head1,node*&head2){
    int pos;
    node*temp1=head1;
    node*temp2=head2;
    cout<<"Position :";
    cin>>pos;
    --pos;
    while(pos--){
        temp1=temp1->next;
    }
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
int length(node*&head){
    int l=0;
    node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}
int findintersection(node*&head1,node*&head2){
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    node* ptr1;
    node* ptr2;

    if(l1>l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d--){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
    }
    while(ptr1!=NULL&& ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
    
}

int main()
{ 
    node* head1=input();
    node* head2=input();
    display(head1);
    display(head2);
    makeintersection(head1,head2);
    display(head1);
    display(head2);
   cout<< findintersection(head1,head2);
    return 0;
}