// implementing stacks from doubly linked list
#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int data){
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }
};


class doublyll{
    public:
    node* head;
    node* tail;

    doublyll(){
        this->head = nullptr;
        this->tail = nullptr;
    }

    void push(int a){
        node* newnode = new node(a);
        if(head == nullptr){
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    void pop(){
        if(head == nullptr){
            cout<<"stack underflow";
            return;
        }
        tail = tail->prev;
    }

    void display(){
        for(node* i = tail;i!=nullptr;i = i->prev){
            cout<<i->data<<endl;
        }
    }

    void peek(){
        cout<<tail->data;
    }
};



int main(){
    doublyll stak;
    stak.push(1);
    stak.push(2);
    stak.push(3);
    stak.push(4);
    stak.push(5);
    stak.pop();
    stak.pop();
    stak.display();
    return 0;
}