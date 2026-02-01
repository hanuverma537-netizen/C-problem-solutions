/*
Problem: Divisible and Non-divisible Sums Difference
Link: https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
Description: You are given positive integers n and m.

Define two integers as follows:

num1: The sum of all integers in the range [1, n] (both inclusive) that are not divisible by m.
num2: The sum of all integers in the range [1, n] (both inclusive) that are divisible by m.
Return the integer num1 - num2.
*/

#include<stdio.h>
int differenceOfSums(int n, int m) {
    int num1 = 0, num2 = 0;
    for(int i=1; i<=n; i++) {
        if (i % m != 0) num1 += i;
        else num2 += i;
    }
    return num1 - num2;
}
int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    printf("%d", differenceOfSums(n, m));
    return 0;
}