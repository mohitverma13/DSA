#include<bits/stdc++.h>
using namespace std;
class twostack{
   
    int *arr;
    int size;
    int top1;
    int top2;
     public:
    twostack(int size){
        this->size=size;
        top1=-1;
        top2=size;
        arr=new int [size];
    }

        void push1(int num){
            if(top2-top1>1){
                top1++;
                arr[top1]=num;
            }
            else{
                cout<<"Stack Overflow\n";
            }
        }
        void push2(int num){
            if(top2-top1>1){
                top2--;
                arr[top2]=num;
            }
            else{
                cout<<"Stack Overflow\n";
            }
        }

        int pop1(){
            if(top1>=0){
                int ans=arr[top1];
                top1--;
                return ans;
            }
            else 
            return -1;
        }
        int pop2(){
            if(top2<=size){
                int ans=arr[top2];
                top2++;
                return ans;
            }
            else 
            return -1;
        }
    };
int main(){
    twostack st(10);
    st.push1(13);
    st.push1(14);
    st.push1(15);
    st.push1(16);
    st.push2(1);
    st.push2(130);
    st.push2(1);
    st.push2(15);
    st.push1(138);
    st.push1(112);
cout<<st.pop1()<<endl;
cout<<st.pop1()<<endl;
cout<<st.pop2()<<endl;
cout<<st.pop2()<<endl;
cout<<st.pop2()<<endl;
cout<<st.pop2()<<endl;
cout<<st.pop1()<<endl;
cout<<st.pop1()<<endl;
cout<<st.pop1()<<endl;
cout<<st.pop1()<<endl;
return 0;
}