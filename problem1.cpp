#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=next;
    }

};
//inserting node on head
void InsertOnhead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
//traversing in linked list
void print( Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next;
    Node* head=node1;
    print(head); 

return 0;
}