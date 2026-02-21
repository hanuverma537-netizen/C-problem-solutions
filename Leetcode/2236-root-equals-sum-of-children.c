/*
Problem: Root Equals Sum of Children
Link: https://leetcode.com/problems/root-equals-sum-of-children/
Description: You are given the root of a binary tree that consists of exactly 3 nodes: the root, its left child, and its right child.

Return true if the value of the root is equal to the sum of the values of its two children, or false otherwise.
*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool checkTree(struct TreeNode* root) {
    return (root->left->val + root->right->val == root->val) ? true : false;
}
int main() {
    struct TreeNode *root = malloc(sizeof(struct TreeNode));
    struct TreeNode *left = malloc(sizeof(struct TreeNode));
    struct TreeNode *right = malloc(sizeof(struct TreeNode));
    scanf("%d %d %d", &root->val, &left->val, &right->val);
    root->left = left;
    root->right = right;
    left->left = left->right = NULL;
    right->left = right->right = NULL;
    (checkTree(root)) ? printf("True\n") : printf("False\n");
    free(left);
    free(right);
    free(root);
    return 0;
}