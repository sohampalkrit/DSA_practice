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
node* buildTree(node* root){
    cout<<"Enter a number: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for left of : "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for right child of: "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void levelOtranversal(node* root){
    queue<node*> qu;
    qu.push(root);
    qu.push(NULL);
    
    while(!(qu.empty())){
        node* temp=qu.front();
        qu.pop();
        if(temp==NULL){
            cout<<endl;
            if(!(qu.empty())){
                qu.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
        if(temp->left){
            qu.push(temp->left);
        }
        if(temp->right){
            qu.push(temp->right);
        }
        }
    }
    
}
void preorder(node* root){
    if(root==NULL) return ;
    cout<<(root->data);
    preorder(root->left);
    preorder(root->right);


}
void inorder(node* root){
    if(root==NULL) return ;
    inorder(root->left);
    cout<<(root->data);
    inorder(root->right);
    

}
vector<int> vec;
void postorder(node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    vec.push_back(root->data);
}
int main(){
    node* root =NULL;
    root=buildTree(root);
    levelOtranversal(root);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    cout<<vec[0];



return 0;
}
//1 3 4 -1 -1 9 -1 -1 7 7 -1 -1 -1 