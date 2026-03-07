/*
Problem: Smallest Even Multiple
Link: https://leetcode.com/problems/smallest-even-multiple/description/
Description: Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
*/

#include<stdio.h>
int smallestEvenMultiple(int n) {
    int x = n;
    while (1) {
        if (x % n == 0 && x % 2 == 0)
            return x;
        x++;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", smallestEvenMultiple(n));
    return 0;
}