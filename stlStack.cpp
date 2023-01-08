#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
//    cout<<s.top()<<endl;
    // s.pop();
        cout<< "size of stack is : "<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top();                            //how to display element of stack
        s.pop();
        cout<<endl;
    }
    cout<<s.size();
    
    
    return 0;
}