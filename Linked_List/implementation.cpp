#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
/*----------------------------------------------------*/

void insertathead(node* &head, int d){
    node* temp = new node(d);
    temp -> next =head;
    head = temp;
}

/*---------------------------------------------------*/

void insertattail(node* &tail, int d){
    node* temp=new node(d);
    tail -> next = temp;
    tail = temp;
}

/*--------------------------------------------------*/

void print(node* &head){
    if(head == NULL){
        cout<<" List is empty"<<endl;
        return;
    }
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp=temp->next;
    }
    cout<<endl;
}

/*--------------------------------------------------*/

int main(){
    node* node1= new node(10);
    cout<<node1-> data <<endl;
    cout<<node1 -> next <<endl;
    return 0;
}