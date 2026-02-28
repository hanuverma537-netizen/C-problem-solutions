/*
Problem: Fizz Buzz
Link: https://leetcode.com/problems/fizz-buzz/
Description: Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char** fizzBuzz(int n, int* returnSize) {
    char **str = malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        str[i] = malloc(12 * sizeof(char));
        if ((i + 1) % 3 == 0 && (i + 1) % 5 == 0) {
            strcpy(str[i], "FizzBuzz");
        }
        else if ((i + 1) % 3 == 0) {
            strcpy(str[i], "Fizz");
        }
        else if ((i + 1) % 5 == 0) {
            strcpy(str[i], "Buzz");
        }
        else {
            sprintf(str[i], "%d", i + 1);
        }
    }
    *returnSize = n;
    return str;
}
int main() {
    int n, returnSize;
    scanf("%d", &n);
    char **result = fizzBuzz(n, &returnSize);
    for (int i=0; i<returnSize; i++)  {
        printf("%s ", result[i]);
    }
    return 0;
}