   #include <iostream>
    using namespace std;
    class Node{
        public:  //default access specifier is private,
        int data;
        Node*next;

        Node(int val)
        {
            data=val;
            next=NULL;
        }
    };
    void insertAtTail(Node* &head,int val)
    {  
    //&head means we are sending original adress of head 
    Node* n=new Node(val);

    if(head == NULL)
    {
        head=n;
        return;
    }

    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;

    }

    void intsertAtHead(Node*&head,int val)
    {
        Node* n= new Node(val);
        n->next=head;
        head=n;
    }

    bool search(Node*head,int key)
    {
        Node* temp=head;

        while(temp!=NULL)
        {
            if(temp->data == key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }

    void deletion(Node* &head,int val)
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

    }

    void delAtHead(Node*&head)
    {
        Node*temp=head;
        head=head->next;
        delete temp;
    }

    Node* reverse(Node* &head) //Node*  used to return a linked list to a function
    {
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;//Node* next = current->next;
        while (current != NULL) {
            next = current->next;
            current->next = prev;

            prev = current;
            current = next;
        }
            
     return prev; //or return prev
            
    }

    //k node reversal
    Node* kreversal(Node* &head,int k)
    {
        //prev,next,current will same
        Node* current = head;
        Node* next = NULL;
        Node* prev = NULL;
        int count = 0;
        while (current != NULL && count < k) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
            }
            if (next != NULL) {
                head->next = kreversal(next, k);
                }
                return prev;

        
    }

    

    void display(Node*head)
    {
        Node*temp=head;
        while(temp !=NULL)
        {
            
            cout<<temp->data<<" ->";
            temp=temp->next;
        }
        cout<< "NULL" <<endl;
    }



    int main() {
        
        Node n1(5);
        Node * head=NULL;
        intsertAtHead(head,1);
        intsertAtHead(head,2);
        intsertAtHead(head,3);
        display(head);
        reverse(head);
        kreversal(head,2);

    }