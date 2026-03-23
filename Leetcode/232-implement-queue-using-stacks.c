/*
Problem: Implement Queue using Stacks
Link: https://leetcode.com/problems/implement-queue-using-stacks/description/
Description: Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

Implement the MyQueue class:

void push(int x) Pushes element x to the back of the queue.
int pop() Removes the element from the front of the queue and returns it.
int peek() Returns the element at the front of the queue.
boolean empty() Returns true if the queue is empty, false otherwise.
Notes:

You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct {
    int top1, top2;
    int stack1[100];
    int stack2[100];
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue *obj = malloc(sizeof(MyQueue));
    obj->top1 = obj->top2 = -1;
    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
    obj->stack1[++obj->top1] = x;
}

int myQueuePop(MyQueue* obj) {
    if (obj->top2 == -1) {
        while (obj->top1 != -1) {
            obj->stack2[++obj->top2] = obj->stack1[obj->top1--];
        }
    }
    return obj->stack2[obj->top2--];
}

int myQueuePeek(MyQueue* obj) {
    if (obj->top2 == -1) {
        while (obj->top1 != -1) {
            obj->stack2[++obj->top2] = obj->stack1[obj->top1--];
        }
    }
    return obj->stack2[obj->top2];
}

bool myQueueEmpty(MyQueue* obj) {
    return obj->top1 == -1 && obj->top2 == -1 ? true : false;
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}

int main() {
    MyQueue *obj = myQueueCreate();
    myQueuePush(obj, 1);
    myQueuePush(obj, 2);
    printf("%d\n", myQueuePeek(obj));
    printf("%d\n", myQueuePop(obj));
    myQueueEmpty(obj) ? printf("true") : printf("false");
    myQueueFree(obj);
    return 0;
}