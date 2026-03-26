/*
Given the head of a singly linked list, 
write a program to reverse the linked list, 
and return the head pointer to the reversed list
Input-  LL: 1   3   2   4 
Output: LL: 4 2 3 1

This will be done recursively
*/
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL){}
};

class Solution {
public :
    ListNode* reverseList(ListNode* head){
        if (head == NULL || head -> next == NULL)
            return head;
    ListNode* newhead = reverseList(head->next);
    ListNode* front = head->next;
    front -> next = head;
    head->next = NULL;
    return newhead;
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution sol;
    ListNode* reversed = sol.reverseList(head);
    while (reversed != NULL) {
        cout << reversed->val << " ";
        reversed = reversed->next;
    }
    cout << endl;
    return 0;
}
