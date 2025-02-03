#include<iostream>
#include<stack>
using namespace std;
 
bool isValid(string s){
    stack<char> st;

    bool ans = true;
    for(int i = 0; i < s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }

        else if(s[i] == ')'){
            if(st.top() == '(' && !st.empty()){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(s[i] == '}'){
            if(st.top() == '{' && !st.empty()){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }

        else if(s[i] == ']'){
            if(st.top() == '[' && !st.empty()){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }
    return ans;
} 


/*
   bool isValid(string s) {
              stack<char> stack;
        unordered_map<char, char> map = {{')', '('}, {'}', '{'}, {']', '['}};
        
        for (char c : s) {
            if (map.count(c)) {
                if (stack.empty() || stack.top() != map[c]) {
                    return false;
                }
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }777735e54q33;l=*/
int main()
{
    string str = "({}]";
    if(isValid(str)){
        cout << "Valid" << endl;
    }
    else{
        cout << "Invalid" << endl;
    }
}