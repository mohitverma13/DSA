#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int front;
    int back;
    int size;

public:
Queue(int size){
    this->size=size;
    arr=new int [size];
    front=-1;
    back=-1;
}
void push(int x){
    if(back==size-1){
        cout<<"OverFllow\n";
        return;
    }
    if(front==-1){
        front++;
    }
    back++;
    arr[back]=x;
}
void pop(){
    if(front==-1||front>back){
        cout<<"Queue is Empty\n";
    }
    front++;
}
int peek(){
     if(front==-1||front>back){
        cout<<"Queue is Empty\n";
        return -1;
    }
    return arr[front];
}
bool empty(){
     if(front==-1||front>back){
        // cout<<"Queue is Empty\n";
        return true;
    }
    return false;
}
};
int main()
{   int n ;
    cout<<"Enter size\n";
    cin>>n;
    Queue q(n);
    int data;
    cout<<"Enqueue\n";
    cin>>data;
    while(data!=-1){
        q.push(data);
        cin>>data;
    }
    if(q.empty()){
        cout<<" Queue Empty\n";
    }
    else{
        cout<<" Queue is not Empty\n";
    }
    cout<<"Dequeue element\n";
    q.pop();
    cout<<"Queue is\n";
    while(!q.empty()){
        cout<<q.peek()<<" ";
        q.pop();
    }
    return 0;
}