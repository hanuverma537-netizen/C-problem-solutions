/*
Problem: Remove Duplicates from Sorted List
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
Description: Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
*/

#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL) return head;
    struct ListNode *temp = head;
    struct ListNode *delete;
    while(temp->next != NULL) {
        if (temp->val == temp->next->val){
            delete = temp->next;
            temp->next = delete->next;
            free(delete);
        }
        else temp = temp->next;
    }
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
    struct ListNode *result = deleteDuplicates(head);
    while(result != NULL) {
        printf("%d ", result->val);
        result = result->next;
    }
    return 0;
}