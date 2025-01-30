#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string s,int size)
{
    stack<char>st;

    bool ans=true;
    for(int i=0;i<size-1;i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
        }

        else if(s[i]=')'){
            if(st.top() =='('&& !st.empty()){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]='}'){
            if(st.top()== '{' && !st.empty()){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }

         else if(s[i]=']'){
            if(st.top()== '[' && !st.empty()){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    return ans;
}

int main()
{
    /*int size;
    cout<<"enter size:"<<endl;
    cin>>size;
    string sy;
    cout<<"enter symbols:"<<endl;
    cin>>sy;*/
    string sy="(){]}[]";
    int size=7;
    bool ans=isvalid(sy,size);
    if(ans==true)
    {
        cout<<"balanced"<<endl;
    }
    else{
        cout<<"not balanced"<<endl;
    }
    

    return 0;
}