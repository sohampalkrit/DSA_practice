#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is freed with data " <<endl;
    }
    
    

};
void insertAtHead(Node* &head,int d){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
    }
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void insertAtPosition(Node* &tail,Node* & head,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //if at last position then updating tail
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
}
    Node* NodeToIn=new Node(d);
    NodeToIn->next=temp->next;
    temp->next=NodeToIn;
}
void printList(Node* head){
        Node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        
    }
//delete node
void deleteNode(int position,Node* &head){
    if(position==1){
        Node* temp = head;
        head=head->next;
        temp->next=NULL;
        delete head;
    

    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    
    
   


return 0;
}