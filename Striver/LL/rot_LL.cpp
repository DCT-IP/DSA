/*
Problem Statement: Given the head of a singly linked list containing integers, 
shift the elements of the linked list to the right by k places and 
return the head of the modified list. 
Do not change the values of the nodes, 
only change the links between nodes.
example:
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
*/
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* node;
    Node(int value){
        data = value;
        node = nullptr;
    }
};

class Solution {
    public:
    Node* node = nullptr;
    void insertAtEnd(int value){
        Node* newNode = new Node(value);
        if(!node){
            node = newNode;
            return;
        }
        Node* current = node;
        while(current->node){
            current = current->node;
        }
        current->node = newNode;
    }
    void printlist(Node *head){
        Node *curr = head;
        while(curr){
            cout << curr->data << " ";
            curr = curr->node;
        }
        cout << endl;
    }

    Node* rotate(Node *head, int n){
        if(!head || !head->node || n == 0) return head;
        Node* curr = head;
        int l = 1;
        while(curr -> node){
            curr = curr -> node;
            l++;
        }
        curr -> node = head;
        n = n%l; //to handle the cases where n > l
        int k = l - n;
        while(k--){
            curr = curr -> node;
        }
        head = curr -> node;
        curr -> node = nullptr;
        return head;
    }
};

int main(){
    Solution s;
    s.insertAtEnd(1);
    s.insertAtEnd(2);
    s.insertAtEnd(3);
    s.insertAtEnd(4);
    s.insertAtEnd(5);
    int k = 2;
    Node* head = s.rotate(s.node, k);
    s.printlist(head);
}