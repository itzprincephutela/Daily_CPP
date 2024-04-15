#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
        
    }
    

};
    // it return node of the create tree; 

    node* createtree(){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    // step 1 create node;
    node* root = new node(data);
    // step 2 create left node
    root->left=createtree();
    // step 3 create right node;
    root->right=createtree();
    return root;
    }


int main(){
    node* root  = createtree();
}