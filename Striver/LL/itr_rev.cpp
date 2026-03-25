/*
Problem Statement: Given the head of a singly linked list, 
write a program to reverse the linked list, and
return the head pointer to the reversed list.
Input-  LL: 1   3   2   4 
Output: 4
*/

#include <bits/stdc++.h>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = head;
        while (temp != NULL) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
};
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution sol;
    ListNode* newHead = sol.reverseList(head);
    while (newHead != NULL) {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }
    cout << endl;
    return 0;
}
