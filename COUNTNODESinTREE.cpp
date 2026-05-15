#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

Node *Create(){
    int x;
    cin>>x;
    if(x==-1)return NULL;
    Node *node = new Node(x);
    node->left=Create();
    node->right=Create();
    return node;
}
void CountLeaves(Node *root,int &cnt){       
    if(root==NULL)return;        

    if(root->left==NULL && root->right==NULL)cnt++;
    CountLeaves(root->left,cnt);
    CountLeaves(root->right,cnt);
    
}

int main(){
    int cnt=0;
    Node *root = Create();
    CountLeaves(root,cnt);
    cout<<"count : "<<cnt;

}
