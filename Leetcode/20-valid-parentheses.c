/*
Problem: Valid Parentheses
Link: https://leetcode.com/problems/valid-parentheses/
Description: Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

char stack[10000];
int top = -1;
void push(char item) {
    if (top == 10000 - 1) return;
    top += 1;
    stack[top] = item;
}
char pop() {
    if (top == -1) return 0;
    char popItem = stack[top];
    top -= 1;
    return popItem;
}
bool isValid(char* s) {
    top = -1;
    for(int i=0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            push(s[i]);
        }
        if(s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (top == -1) return false;
            else if (s[i] == ')' && stack[top] == '(') {
                pop();
            }
            else if (s[i] == ']' && stack[top] == '[') {
                pop();
            }
            else if (s[i] == '}' && stack[top] == '{') {
                pop();
            }
            else return false;
        }
    }
    return (top == -1) ? true : false;
}
int main() {
    char *s = malloc(1024 * sizeof(char));
    fgets(s, 500, stdin);
    (isValid(s)) ? printf("true") : printf("false");
    return 0;
}