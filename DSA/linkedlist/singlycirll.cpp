#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    
    Node(int val)
    {
        data=val;
        next=NULL;
        
    }
    
};


Node* insertAtTail(Node* &head,int val)
{
   Node* n=new Node(val);//creating a node in memory
   Node* temp = head;

   if(head==NULL){
    head=n;
   }

   while(temp->next != head)
   {
    temp = temp->next;
   }
   temp->next =n;
   n->next=head;
   return head;

   
}

void insertAtHead(Node* &head,int val)
{
    Node* n=new Node(val);//creating a node in memory
     
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }

    Node*temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
    
}

void deletionAtHead(Node* &head)
{
    Node* del=head;
    Node*temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=head->next;
    head=head->next;
    delete del;
}

void display(Node*head)
    {
        Node*temp=head;
        while(temp->next !=head)
        {
            
            cout<<temp->data<<" ->";
            temp=temp->next;
        }
        cout<< "NULL" <<endl;
    }

Node* floydLoopDetect(Node* head) 
{
    // 1st ques find loop
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL && fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return slow;//it is returning the node where the loop starts or 1st slow==fast
            // 1st ques find loop,2nd ques find node where loop starts(answer is where the loop intersect(slow==fast) after loop found)
        }
    }
    return NULL;
    
}

//2nd ques find node where loop starts(answer is where the loop intersect(slow==fast) after loop found)
Node* getStartingNode(Node* head){
    if(head==NULL) return NULL;

    Node* intersection=floydLoopDetect(head);
    Node* slow= head;

    while(slow !=intersection){
        slow=slow->next;
        intersection=intersection->next;
}

return slow;
}

//3rd question remove node where loop starting
void removeLoop(Node* &head){
    if(head==NULL) return;

    Node* startofloop=getStartingNode(head);
    Node* temp=startofloop;

    while(temp->next !=startofloop){
        temp=temp->next;
    }
    temp->next=NULL;
}

int main()
{
  Node n(1);//object created
  Node* head=NULL;
  insertAtHead(head,2);
  insertAtHead(head,3);
  insertAtHead(head,4);
  insertAtHead(head,5);
  insertAtHead(head,6);
  display(head);
  deletionAtHead(head);

}
