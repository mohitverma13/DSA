#include<bits/stdc++.h>
using namespace std;
void reversesentence(string str){
 stack<string> st;
for(int i=0;i<str.length();i++){
    string word="";
    while(str[i]!=' ' && i<str.length()){
        word=word+str[i];
        i++;
    }
    st.push(word);
}
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
}
int main()
{ 
    string str;
    cout<<"Enter String\n";
    getline(cin,str);
    
    reversesentence(str);
    return 0;
}