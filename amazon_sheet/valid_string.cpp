#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="()[]{}";
    stack<char> st;
    for(char x: s){
        if(x=='(' || x=='{' || x=='['){
            st.push(x);
        }else if(x==')'){
            if(!st.empty() && st.top() == '('){
                st.pop();
            }else{
                st.push(x);
            }
        }else if(x==']'){
            if(!st.empty() && st.top() == '['){
                st.pop();
            }else{
                st.push(x);
            }
        }else if(x=='}'){
            if(!st.empty() && st.top() == '{')
                st.pop();
            else
                st.push(x);
        }
    }
    // if(!st.empty())
    //     cout << st.top();
    if(st.empty()) return true;
    else return false;
}