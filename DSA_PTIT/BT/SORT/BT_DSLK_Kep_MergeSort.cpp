#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next, *prev;
};

// tach 1 dslk thanh 2 dslt voi mot nua kich thuoc
Node *split(Node *head){
    Node *slow = head, *fast = head;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *tmp = slow->next;
    slow->next = NULL;
    return tmp;
}

// ham tron 2 dslk
Node *merge(Node *first, Node *second){
    // neu dslk 1 rong
    if(!first) return second;
    // neu dslk 2 rong
    if(!second) return first;
    // chon gia tri nho hon
    if(first->data < second->data){
        first->next = merge(first->next, second);
        first->next->prev = first;
        first->prev = NULL;
        return first;
    }
    else {
        second->next = merge(first, second->next);
        second->next->prev = second;
        second->prev = NULL;
        return second;
    }
}

// thuc hien sap xep hop nhat
Node *mergeSort(Node *head){
    if(!head || !head->next) return head;
    Node *second = split(head);

    // de quy cho nua ben trai va ben phai
    head = mergeSort(head);
    second = mergeSort(second);

    return merge(head, second);
}

// chen mot nut moi tai vi tri bat dau danh sach
void insert(Node **head, int data){
    Node *tmp = new Node();
    tmp->data = data;
    tmp->next = tmp->prev = NULL;
    if(!(*head)) (*head) = tmp;
    else {
        tmp->next = *head;
        (*head)->prev = tmp;
        (*head) = tmp;
    }
}

// in dslk theo huong tang dan va giam dan
void print(Node *head){
    Node *tmp = head;
    while(head){
        cout << head->data << " ";
        tmp = head;
        head = head->next;
    }
    cout << endl;
    while(tmp){
        cout << tmp->data << " ";
        tmp = tmp->prev;
    }
}

int main(){
    Node *head = NULL;
    insert(&head, 5);
    insert(&head, 20);
    insert(&head, 4);
    insert(&head, 3);
    insert(&head, 30);
    insert(&head, 10);
    head = mergeSort(head);
    print(head);
    return 0;

}