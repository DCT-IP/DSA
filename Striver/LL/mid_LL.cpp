/*
Problem Statement: Given the head of a linked list of integers, 
determine the middle node of the linked list. However, 
if the linked list has an even number of nodes,
return the second middle node
Input:
 LL: 1  2  3  4  5 
Output:
 3
*/
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int value;
        Node* next;
        Node(int val){
            value = val;
            next = nullptr;
        }
};
Node *middle(Node *head){
    Node *tort = head;
    Node *hare = head;
    while(hare!=NULL && hare->next != NULL){
        tort = tort -> next;
        hare = hare -> next -> next;
    }
    return tort;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    Node* midVal = middle(head);
    cout << "The middle node is: " << midVal->value << endl;
    return 0;
}