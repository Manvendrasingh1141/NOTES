#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left , *right;
    
    Node(int val){
        data=val;
        left=right=NULL;
    } 
};

Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1)return NULL;
    Node* node = new Node(x);
    node->left = BinaryTree();     //create LEFT
    node->right = BinaryTree();    //create RIGHT
    return node;                   //return the address so that it can be stored in left aur right.    
}


//TREE with RECURRSION
int main(){
    Node *root = BinaryTree();    //Only one root will be created and address of function will stored in it.
}




