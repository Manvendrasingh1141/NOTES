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


// Height = max distance between leaf node and root
//Method-1:
void treeHeight(Node *root,int &cnt, int &hyt){       
    if(!root)return;        

    cnt++;
    if(!root->left && !root->right){       
        hyt = max(hyt,cnt);
    }
    treeHeight(root->left,cnt,hyt);
    treeHeight(root->right,cnt,hyt);
    cnt--;                          //Backtracking then keep cnt--;
}

//Method-2:
int treeHeight(Node *root, int &hyt){       
    if(!root)return 0;        
    
    return 1+max(treeHeight(root->left,hyt),treeHeight(root->right,hyt));
}

int main(){
    int cnt=0,hyt=0;
    Node *root = Create();
    treeHeight(root,cnt,hyt);
    cout<<"treeHeight : "<<hyt;

}
