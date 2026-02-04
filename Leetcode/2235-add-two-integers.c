/*
Problem: Add Two Integers
Link: https://leetcode.com/problems/add-two-integers/description/
Description: Given two integers num1 and num2, return the sum of the two integers.
*/

#include<stdio.h>
int sum(int num1, int num2) {
    return num1 + num2;
}
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d", sum(num1, num2));
    return 0;
}