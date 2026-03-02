/*
Problem: Min Stack
Link: https://leetcode.com/problems/min-stack/description
Description: Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int top;
    int stack[30000];
    int minStack[30000];
} MinStack;

MinStack* minStackCreate() {
    MinStack *obj = (MinStack*)malloc(sizeof(MinStack));
    obj->top = -1;
    return obj;
}
void minStackPush(MinStack* obj, int val) {
    obj->top++;
    obj->stack[obj->top] = val;

    if (obj->top == 0) {
        obj->minStack[obj->top] = val;
    } else {
        int currentMin = obj->minStack[obj->top - 1];
        obj->minStack[obj->top] = (val < currentMin) ? val : currentMin;
    }
}
void minStackPop(MinStack* obj) {
    if (obj->top >= 0) {
        obj->top--;
    }
}
int minStackTop(MinStack* obj) {
    return obj->stack[obj->top];
}
int minStackGetMin(MinStack* obj) {
    return obj->minStack[obj->top];
}
void minStackFree(MinStack* obj) {
    free(obj);
}
int main() {
    MinStack* obj = minStackCreate();
    minStackPush(obj, -2);
    minStackPush(obj, 0);
    minStackPush(obj, -3);
    printf("Min: %d\n", minStackGetMin(obj));
    minStackPop(obj);
    printf("Top: %d\n", minStackTop(obj));
    printf("Min: %d\n", minStackGetMin(obj));
    minStackFree(obj);
}