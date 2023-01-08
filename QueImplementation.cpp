#include<bits/stdc++.h>
#include<queue>
#define n 50
using namespace std;

class Queue{
    int *arr;
    int front;
    int back;
    public:
    Queue(){
        arr= new int [n];
        front=-1;
        back=-1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Overflow\n";
            return ;
        }

        if(front==-1){
            front++;
        }
        // if(back==-1){
        //     back++;
        // }
        back++;
        arr[back]=x;

    }
    void pop(){
        if(front==-1|| front > back){
            cout<<"Empty\n";
            return ;
        }
        front++;
    }
    int peek(){
        if(front==-1|| front > back){
            cout<<"Empty\n";
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1||front > back){
            // cout<<"Empty\n";
            return true;
        }
        return false;
    }
};
int main()
{ 
    Queue q;
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(1);
    q.push(55);
    q.push(1);
    q.push(18);
    q.push(15);
    q.push(15);
    // q.push(1);
    // cout<<q.peek()<<endl;
    // q.pop();
     while(!q.empty()){
        cout<<q.peek()<<endl;;
        q.pop();
    }
    return 0;
}