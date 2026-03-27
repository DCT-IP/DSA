/*
Given the head of a singly linked list 
representing a positive integer number. 
Each node of the linked list represents a digit of the number, 
with the 1st node containing the leftmost digit of the number and so on. 
Check whether the linked list values form a palindrome or not. 
Return true if it forms a palindrome, otherwise, return false

Example:-
Input: head -> 3 -> 7 -> 5 -> 7 -> 3
Output: true
Explanation: 37573 is a palindrome.
*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int val){
            data = val;
            next = nullptr;
        }
};

class Solution{
public:
    Node* reverseList(Node* head){
        if (head == NULL || head->next == NULL)
            return head;
        Node* newhead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newhead;
    }
    bool pal_check(Node *head){
        if (!head || !head->next) return true;
        Node *slow = head, *fast = head;
        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* second = reverseList(slow);
        Node* first = head;
        while (second){
            if (first->data != second->data)
                return false;
            first = first->next;
            second = second->next;
        }
        return true;
    }
};

int main(){
    Node* head = new Node(3);
    head->next = new Node(5);
    head->next->next = new Node(7);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(3);
    Solution sol;
    bool ans = sol.pal_check(head);
    cout << "Is it palindrome: " << ans;
    cout << endl;
    return 0; 
}