/*
Problem: Remove Nth Node from End of List
Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
Description: Given the head of a linked list, remove the nth node from the end of the list and return its head.
*/

#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    if (count == n) {
        struct ListNode *delete = head;
        head = head->next;
        return head;
    }
    temp = head;
    count = count - n - 1;
    while (count > 0) {
        temp = temp->next;
        count--;
    }
    struct ListNode *delete = temp->next;
    temp->next = delete->next;
    return head;
}
int main() {
    struct ListNode *head = NULL;
    int nodes, n;
    scanf("%d", &nodes);
    for(int i=0; i<nodes; i++) {
        struct ListNode *newNode;
        newNode = malloc(sizeof(struct ListNode));
        scanf("%d", &newNode->val);
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            continue;
        }
        struct ListNode *temp = head;
        while (temp -> next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    scanf("%d", &n);
    struct ListNode *result = removeNthFromEnd(head, n);
    while(result != NULL) {
        printf("%d ", result->val);
        result = result->next;
    }
    return 0;
}