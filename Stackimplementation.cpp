#include<bits/stdc++.h>

using namespace std;
class Stack{
    public:
    int *arr;
    int size ;
    int top;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack is overflow\n";
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is underflow\n";
        }
    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty\n";
            return -1;
        }
    }
    bool isempty(){
        if(top==-1){
        return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Stack st (5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    if(st.isempty()){
        cout<<"Stack is empty\n";
    }
    else{
        cout<<"Stack is not empty\n";
    }
    while(!st.isempty()){
        cout<<st.peek();
        cout<<endl;
        st.pop();
    }

    return 0;
}