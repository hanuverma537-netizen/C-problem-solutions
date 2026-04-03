/*
Problem: Rotate List
Link: https://leetcode.com/problems/rotate-list/description/
Description: Given the head of a linked list, rotate the list to the right by k places.
*/

#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL || head->next == NULL) return head;
    int count = 1;
    struct ListNode *temp = head;
    while (temp->next != NULL) {
        count++;
        temp = temp->next;
    }
    temp->next = head;
    temp = head;
    count = count - (k % count);
    for (int i=0; i<count - 1; i++) {
        temp = temp->next;
    }
    head = temp->next;
    temp->next = NULL;
    return head;
}
int main() {
    struct ListNode *head = NULL;
    int nodes, k;
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
    scanf("%d", &k);
    struct ListNode *result = rotateRight(head, k);
    while(result != NULL) {
        printf("%d ", result->val);
        result = result->next;
    }
    return 0;
}