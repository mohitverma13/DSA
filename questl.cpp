#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{ 
    queue<int>q;
    q.push(13);
    q.push(11);
    q.push(15);
    q.push(16);
    cout<<"size of que is  :" <<q.size()<<endl;
    q.pop();
    cout<<"size of que is  :" <<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
    return 0;
}