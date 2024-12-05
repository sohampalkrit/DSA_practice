#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};
node* insert(node* Node, int key){
    if(Node==NULL) return new node(key);
    if(key>Node->data){
        Node->right=insert(Node->right,key);}
    else{
        Node->left=insert(Node->left,key);}
    return Node;
    }
