#include<bits/stdc++.h>
using namespace std;

// khoi tao node
struct node{
    int data;
    struct node *next;
};

// tao ra node moi
node* makeNode(int x){
    node *newNode = new node();
    nowNode->data = x;
    newNode->next = NULL;
    return newNode;
}

// duyet cac node
void duyet(node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

// dem so phan tu node
int count(node *head){
    int count = 0;
    while(head != NULL){
        ++count;
        head = head->next;
    }
}

// them mot node vao dau danh sach lien ket
void pushFront(node **head, int x){
    node *newNode = makeNode(x);
    // buoc 1: phan next cua newNode => head
    newNode->next = *head; // *head la dia chi cua node head trong dslk
    // buoc 2: cap nhat node head => newNode
    *head = newNode;
}
void pushFront2(node *&head, int x){
    node *newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}


// them mot node vao cuoi danh sach lien ket



int main(){
    node *head = NULL;
    for(int i=1; i<=5; i++){
        pushFront(&head, i);
    }
    for(int i=10; i<=20; i++){
        pushFront2(head, i);
    }
    duyet(head);
    cout << count(head);
    return 0;
}