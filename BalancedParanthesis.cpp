#include<bits/stdc++.h>
using namespace std;
bool isvalid(string str){
    stack<char>st;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        if(ch=='('||ch=='{'||ch=='['){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                char top=st.top();

                if((ch==')'&& top=='(') || (ch=='}' && top=='{') || (ch==']') && top=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main()
{ 
    string str;
    cout<<"Enter Paranthesis\n";
    getline(cin,str);
    if(isvalid(str)){
        cout<<"Balanced\n";
    }
    else{
        cout<<"Not balanced\n";
    }
    return 0;
}