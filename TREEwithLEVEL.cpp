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

//TREE with level wise (left,right)
int main(){
    int x;
    cin>>x;
    int f,s;
    queue<Node*>q;
    Node *root = new Node(x);
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();      //[100]
        q.pop();
        
        //create LEFT 
        cin>>f;
        if(f!=-1){
        temp->left = new Node(f);
        q.push(temp->left);
        }
        
        //create RIGHT
        cin>>s;
        if(s!=-1){
        temp->right = new Node(f);
        q.push(temp->right);
        }
    }
}




