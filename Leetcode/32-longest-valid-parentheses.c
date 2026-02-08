/*
Problem: Longest Valid Parentheses
Link: https://leetcode.com/problems/longest-valid-parentheses/description/
Descrtiption: Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses substring.
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 30000

int stack[MAX];
int top = -1;
void push(int item) {
    if (top == MAX - 1) return;
    stack[++top] = item;
}
int pop() {
    if (top == -1) return 0;
    return stack[top--];
}
int longestValidParentheses(char* s) {
    top = -1;
    int maxLen = 0;
    push(-1);
    for(int i=0; s[i] != '\0'; i++) {
        if (s[i] == '(') push(i);
        else {
            pop();
            if (top == -1) push(i);
            else {
                int length = i - stack[top];
                if(length > maxLen) maxLen = length;
            }
        }
    }
    return maxLen;
}
int main() {
    char *s = malloc(1024 * sizeof(int));
    scanf("%[^\n]", s);
    printf("%d", longestValidParentheses(s));
    return 0;
}