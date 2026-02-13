/*
Problem: Middle of the Linked List
Link: https://leetcode.com/problems/middle-of-the-linked-list/description/
Description: Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
*/

#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp = head;
    int count = 0;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    int countMax = count;
    (count % 2 != 0) ? (count = (count / 2) + 1) : (count /= 2);
    temp = head;
    while(temp != NULL) {
        if (count == countMax) break;
        temp = temp->next;
        count++;
    }
    return temp;
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
    struct ListNode *result = middleNode(head);
    while(result != NULL) {
        printf("%d ", result->val);
        result = result->next;
    }
    return 0;
}