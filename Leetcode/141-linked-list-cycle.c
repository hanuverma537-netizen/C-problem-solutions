/*
Problem: Linked List Cycle
Link: https://leetcode.com/problems/linked-list-cycle/
Description: Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool hasCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL) return false;
    struct ListNode *fast = head, *slow = head;
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next;
        if (slow == fast) return true;
        slow = slow->next;
        fast = fast->next;
    }
    return false;
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
    (hasCycle(head)) ? printf("True") : printf("False");
    return 0;
}