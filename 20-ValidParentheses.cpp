#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<cstring>
using namespace std;

bool ValidParenthesis(string &str)
{
    stack<char> st;
    for(char ch:str)
    {
        if(ch=='('||ch=='{'||ch=='[')
        {
            st.push(ch);
        }
        else{
            if(!st.empty())
            {
                char top=st.top();
                if(ch==')' && top=='(')
                {
                    st.pop();
                }
                else if(ch=='}' && top=='{'){
                    st.pop();
                }
                else if(ch==']' && top=='[')
                {
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
    if(st.empty())
    {
        return true;
    }
    return false;

}

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<ValidParenthesis(str);
}