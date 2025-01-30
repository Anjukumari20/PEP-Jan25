#include <iostream>
#include <stack>
#include <sstream>
#include<bits/stdc++.h>
using namespace std;

/*void reverseWords(string str) {
    stack<string> words;
    stringstream ss(str);
    string word;
    
    // Push words onto the stack
    while (ss >> word) {
        words.push(word);
    }
    
    // Pop and print words in reverse order
    while (!words.empty()) {
        cout << words.top() << " ";
        words.pop();
    }
    cout << endl;
}*/

void reverseSentence(string s)
{
    stack<string> st;

    for(int i=0;i<s.length();i++)
    {
        string word="";
        while(s[i] != ' '  && i<s.length()){
          word+=s[i];
          i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main() {
    string input = "hello how are you";
    reverseSentence(input);
    return 0;
}