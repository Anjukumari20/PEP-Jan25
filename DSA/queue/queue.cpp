#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

class Queue{
   public:
   int front;
   int back;
   int size;
   int* arr;
   Queue()
   {
      arr=new int[size];
      front=-1;
      back=-1;
   }

   bool isEmpty()
   {
      if(front && back ==-1)
      {
         //cout<<"queue is empty"<<endl;
         return true;
      }
      return false;
   }

   bool isFull(){
      if(back=size-1)
      {
         //cout<<"queue is full"<<endl;
         return true;
      }
      return false;
   }

   void push(int val)
   {
      if(isEmpty())
      {
         
         arr[front]=val;
         front++;
         
         
      }
      
   }
   int peek()
   {
      return front;
   }


};

int main()
{
  
  Queue q;
  q.push(1);
  cout<<q.peek();
  

   return 0;

}