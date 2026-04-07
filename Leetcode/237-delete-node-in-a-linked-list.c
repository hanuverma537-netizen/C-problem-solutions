/*
Problem: Delete Node in a Linked List
Link: https://leetcode.com/problems/delete-node-in-a-linked-list/description/
Description: There is a singly-linked list head and we want to delete a node node in it.

You are given the node to be deleted node. You will not be given access to the first node of head.

All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.

Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:

The value of the given node should not exist in the linked list.
The number of nodes in the linked list should decrease by one.
All the values before node should be in the same order.
All the values after node should be in the same order.
Custom testing:

For the input, you should provide the entire linked list head and the node to be given node. node should not be the last node of the list and should be an actual node in the list.
We will build the linked list and pass the node to your function.
The output will be the entire list after calling your function.
*/

#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

void deleteNode(struct ListNode* node) {
    struct ListNode *temp = node->next;
    node->val = temp->val;
    node->next = temp->next;
    free(temp);
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
    struct ListNode *node = head;
    int nodeVal;
    scanf("%d", &nodeVal);
    for (int i=0; i<nodeVal - 1; i++) {
        node = node->next;
        if (node->next == NULL) return 0;
    }
    deleteNode(node);
    struct ListNode *temp = head;
    while(temp != NULL) {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    return 0;
}