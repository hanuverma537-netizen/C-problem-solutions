/*
Problem: Delete the Middle Node of a Linked List
Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/
Description: You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
*/

#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteMiddle(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return NULL;
    struct ListNode *temp = head;
    int count = 0;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    temp = head;
    for(int i=0; i<(count / 2) - 1; i++) {
        temp = temp->next;
    }
    struct ListNode *delete = temp->next;
    temp->next = delete->next;
    delete->next = NULL;
    free(delete);
    return head;
}
int main() {
    struct ListNode *head = NULL;
    int nodes;
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
    struct ListNode *result = deleteMiddle(head);
    while(result != NULL) {
        printf("%d ", result->val);
        result = result->next;
    }
    return 0;
}