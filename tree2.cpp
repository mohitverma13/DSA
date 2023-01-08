#include<bits/stdc++.h>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=left;
        this->right=right;
    }
};
node* buildtree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root =new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;

}
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
// class solution{
//     public:
//     int height(struct node* node){
//         if(node==NULL){
//             return 0;
//         }
//         int left =height(node->left);
//         int right =height(node->right);
//         int ans=max(left,right)+1;
//         return ans;
//     }
// };
int height( node* root){
        if(root==NULL){
            return 0;
        }
        int left =height(root->left);
        int right =height(root->right);
        int ans=max(left,right)+1;
        return ans;
    }
int main()
{ 
    node* root= NULL;
    root= buildtree(root);  
    cout<<"Level order "<<endl;
    levelordertraversal(root);
    cout<<"Height of the tree is \n";
    cout<<height(root) ;
    return 0;
}
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 