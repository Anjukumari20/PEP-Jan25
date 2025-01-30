#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
        cout<<"NULL "<<val<<" NULL";
    }
    
};

void insertAtTail(Node* &head,int val)
{
    Node* n = new Node(val);
    Node* temp = head;
    //if(head==NULL) return n;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    


    
    
}

int main()
{
    Node n(5);

return 0;
}