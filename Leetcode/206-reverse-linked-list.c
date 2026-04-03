/*
Problem: Reverse Linked List
Link: https://leetcode.com/problems/reverse-linked-list/
Description: Given the head of a singly linked list, reverse the list, and return the reversed list.
*/

#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    struct ListNode *temp = head, *next = NULL, *prev = NULL;
    while(temp != NULL) {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    return prev;
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
    struct ListNode *result = reverseList(head);
    while(result != NULL) {
        printf("%d ", result->val);
        result = result->next;
    }
    return 0;
}