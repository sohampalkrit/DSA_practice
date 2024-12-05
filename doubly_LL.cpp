#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlen(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertAthead(Node* &head,Node* &tail,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;}
}
void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;}
}
void insertAtposition(Node* &head,Node* &tail,int d,int position){
    if(position==1){
        insertAthead(head,tail,d);
        return;
    }
    int cnt=1;
    Node* temp=head;
    while (cnt<position-1)
    {

        temp=temp->next;
        cnt++;
    }
    Node* NodeToInsert=new Node(d);
    NodeToInsert->next=temp->next;
    temp->next->prev=NodeToInsert;
    temp->next=NodeToInsert;
    NodeToInsert->prev=temp;
    if(temp->next==NULL){
        insertAtTail(tail,head,d);
        return;
    }

}
 
int main(){
    /*//Node* node1=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;
    print(head);
    cout<<getlen(head)<<endl;
    insertAthead(head,tail,12);
    print(head);
    cout<<getlen(head)<<endl;
    insertAtTail(tail,head,20);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

   insertAtposition(head,tail,23,2);
   print(head);*/
   Node* node1=new Node(10);
   node1->next->data=10;
   node1->prev->data=5;


return 0;
}