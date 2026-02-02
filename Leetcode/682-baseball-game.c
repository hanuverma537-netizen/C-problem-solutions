#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int stack[1000];
int top = -1;
void push(int x) {
    if (top == 1000-1) return;
    stack[++top] = x;
}
int pop() {
    if (top == -1) return 0;
    return stack[top--];
}
int calPoints(char** operations, int operationsSize) {
    int sum = 0;
    top = -1;
    for(int i=0; i<operationsSize; i++) {
        if (operations[i][0] == 'C') {
            pop();
        }
        else if(operations[i][0] == 'D') {
            push(stack[top] * 2);
        }
        else if(operations[i][0] == '+') {
            push(stack[top] + stack[top - 1]);
        }
        else {
            push(atoi(operations[i]));
        }
    }
    for(int i=0; i <= top; i++) {
        sum += stack[i];
    }
    return sum;
}
int main() {
    int operationsSize;
    scanf("%d", &operationsSize);
    char *operations[operationsSize];
    char buffer[10];
    for(int i=0; i<operationsSize; i++) {
        scanf("%s", buffer);
        operations[i] = strdup(buffer);
    }
    printf("%d", calPoints(operations, operationsSize));
    for(int i=0; i<operationsSize; i++) free(operations[i]);
    return 0;
}