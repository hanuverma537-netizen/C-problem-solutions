/*
Problem: Same Tree
Link: https://leetcode.com/problems/same-tree/
Description: Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL) return true;
    if (p == NULL || q == NULL) return false;
    if (p->val != q->val) return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
struct TreeNode* buildTree() {
    int val;
    scanf("%d", &val);
    if (val == -1) return NULL;
    struct TreeNode* node = malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = buildTree();
    node->right = buildTree();
    return node;
}
int main() {
    struct TreeNode* p = buildTree();
    struct TreeNode* q = buildTree();
    if (isSameTree(p, q)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}