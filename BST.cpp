#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }
};
void levelordertraversal(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
node* insertintobst(node* root,int  d){
    if(root==NULL){
        root=new node(d);
        return root;
    }
    if(d>root->data){
        root->right=insertintobst(root->right,d);
    }
    else{
        root->left=insertintobst(root->left,d);
    }
    return root;
}
void takeinput(node* &root){
        int data;
        cin>>data;
        // node* root=NULL;
        while(data!=-1){
        //    node* root=new node(data);
           root=insertintobst(root,data);
           cin>>data;
        }
}
bool searchinbst(node* root,int x){
    cout<<"Enter element to search\n";
    cin>>x;
    node* temp=root;
    while(temp!=NULL){
        if(temp->data==x){
            return root;
        }
        if(temp->data>x){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
    }
    return false;
}
int main()
{ 
    int x;
    node* root=NULL;
    cout<<"Enter data for bst\n";
    takeinput(root);
    levelordertraversal(root);
    if (searchinbst(root,x)){
        cout<<"Element Found\n";
    }
    else{
        cout<<"Not Found\n";
    }
    return 0;
}