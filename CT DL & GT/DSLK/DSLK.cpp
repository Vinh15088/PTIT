#include<bits/stdc++.h>
using namespace std;

// tao node
class Node {
    public:
        int data;
        Node* next;
};

// tao danh sach lien ket gom 3 node
int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    head = new Node();
    second = new Node();
    thirt = new Node();

    head->data-1; 
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
}

// Chen nut vao danh sach: co 3 cach
    // ở phía đầu danh sách liên kết
    // sau một nút nhất định
    // ở cuối danh sách liên kết

// +Chèn ở đầu danh sách liên kết
void push(Node** head_ref, int new_data){
    // 1 allocate node
    Node* new_code = new Node();
    // 2 put in the data
    new_code->data = new_data;
    // 3 make next of new node as head
    new_node->next = (*head_ref);
    // 4 move the head to point to the new node
    (*head_ref) = new_node;
}

// +Chèn ở giữa, sau nút bất kỳ
void insertAfter(Node* prev_node, int new_data) {
    // 1 check if the given prev_node is NULL
    if(prev_node==NULL) {
        cout << "The given previous node cannot be NULL"
        return;
    }
    // 2 Allocate new node
    Node* new_node = new Node();
    // 3 put in the data
    new_node->data = new_data;
    // 4 make next of new node as
    // next of prev_node
    new_node->next = prev_node->next;
    // move the next of prev_node
    // as new_node
    prev_node->next = new_node;
}

// +Chèn ở cuối danh sách
void append(Node** head_ref, int new_data){
    // 1 allocate node
    Node* new_node = new Node();
    // used int step 5
    Node *last = *head_ref;
    // 2 put in the data
    new_node->data = new_data;
    // 3 this new node is going to be
    // the last node, so make next of
    // it as NULL
    new_node->next = NULL;
    // 4 if the linked list is empty,
    // then make the new node as head
    if(*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    // 5 else traverse till the last node
    while(last->next != NULL) last = last->next;
    // 6 change the next of last node
    last->next = new_node;
    return;
}


// Xoa 1 node
    // phuong phap de quy
    // phuong phap lap: thuc hien qua cac buoc sau
        // 1 tim nut phia truoc cua nut bi xoa
        // 2 thay doi next cua nut phia truoc
        // 3 giai phong bo nho cho nut bi xoa
