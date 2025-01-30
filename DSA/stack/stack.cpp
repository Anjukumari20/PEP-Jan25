#include<bits/stdc++.h>
using namespace std;
//homewrk stack using linked list.
//i/p->"hello how are you"  o/p->you are how hello
/*applications of stack
1.undo redo
2.function call
3.chrome history
4.recursion
5.Expression evaluation
6.Syntax parsing
7.Memory management
*/

class Mystack
{
  public:
  int *arr;
  int top;
  int size;

  Mystack(){
    arr=new int[size];
    top=-1;
  }

  void push(int val)
  {
    if(top==size-1)
    {
        cout<<"stack overflow"<<endl;
    }
    top++;
    arr[top]=val;
  }

  int peek()
  {
    return arr[top];
  }
  int pop()
  {
    if(isempty())
    {
      cout<<"stackunder flow"<<endl;
    }
    /*int r=arr[top--];
    return r;*/

    return arr[top--];
  }
  bool isempty(){
    if(top==-1)
    {
      return true;
    }
    return false;
  }
   bool isfull(){
    if(top==size-1)
    {
      return true;
    }
    return false;
  }

 
};

int main()
{
  Mystack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  
  
  
  cout<<"top element is:"<<s.peek()<<endl;
  cout<<"poped element is :"<<s.pop()<<endl;
  

    return 0;
}