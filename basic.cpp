#include<iostream>
using namespace std ;
class node {
    public:
    int data ;
    node* next;
    // default constructor
    node(){
        cout<<"DEFAULT"<<endl;
        this->next=NULL;
    }

    // paramiterized constructor
    node(int data){
        // cout<<"PARA"<<endl;
        this->data=data;
        this->next=NULL;
    }

};
void printLL(node* head){
    // allways make temp banaoge 
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
       temp= temp->next;

    }
    cout<<endl;
}
void printlen(node* head){
    int count=0;
       node* temp = head;
       while(temp != NULL){
        count++;
        temp=temp->next;
       }
       cout<<count<<endl;
}
int main (){
    // static
    node a;
    // dayanamic allocation
    // / node* head = new node ;
    // creation of nodes
    node* first = new node(10);
    node* sec = new node(20);
    node* third = new node(30);
    node* fou = new node(40);
    node* five = new node(50);


    first->next=sec;
    sec->next=third;
    third->next=fou;
    fou->next=five;
    five->next=NULL;
    // linklist create ho chuki h;
    node* head = first;
    // print krna h to call lagaaooo
    printLL(head);
    printlen(head);
    
}
