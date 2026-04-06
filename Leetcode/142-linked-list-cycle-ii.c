/*
Problem: Linked List Cycle II
Link: https://leetcode.com/problems/linked-list-cycle-ii/
Description: Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

Do not modify the linked list.
*/

#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *detectCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL) return NULL;
    struct ListNode *fast = head, *slow = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            slow = head;
            while (fast != slow) {
                fast = fast->next;
                slow = slow->next;
            }
            return slow;
        }
    }
    return NULL;
}
int main() {
    struct ListNode *head = NULL;
    int nodes;
    scanf("%d", &nodes);
    int pos;
    scanf("%d", &pos);
    struct ListNode *temp = NULL;
    for (int i = 0; i < nodes; i++) {
        struct ListNode *newNode = malloc(sizeof(struct ListNode));
        scanf("%d", &newNode->val);
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            temp = head;
        } 
        else {
            temp->next = newNode;
            temp = temp->next;
        }
    }
    if (pos != -1 && temp != NULL) {
        struct ListNode *curr = head;
        for (int i = 0; i < pos && curr != NULL; i++) {
            curr = curr->next;
        }
        if (curr != NULL) {
            temp->next = curr;
        }
    }
    (detectCycle(head) != NULL) ? printf("tail connects to node value %d", detectCycle(head)->val) : printf("no cycle");
    return 0;
}