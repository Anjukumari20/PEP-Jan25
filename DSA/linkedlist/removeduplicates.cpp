#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int data)
    {
        val=data;
        next=NULL;
    }

};

 /*void deletion(Node* &head,int val)
    {
        Node*temp=head;
        if(head==NULL) return;
        while(temp->next->data !=val)
        {
            temp=temp->next;
        }
        Node* del=temp->next;
        temp->next=temp->next->next;
        delete del;

    }*/

   

int main()
{
    return 0;
}