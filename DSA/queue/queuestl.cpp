//too see stl method implement go to chrome search cppreference.com or cpp.com 
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> s;
    cout<<s.empty();
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"front:"<<s.front()<<endl;
    cout<<"back:"<<s.back()<<endl;
    cout<<"size:"<<s.size()<<endl;
    s.pop();
    return 0;
}