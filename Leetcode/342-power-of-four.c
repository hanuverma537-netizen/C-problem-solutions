/*
Problem: Power of Four
Link: https://leetcode.com/problems/power-of-four/
Description: Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.
*/

#include<stdio.h>
#include<stdbool.h>
bool isPowerOfFour(int n) {
    if (n <= 0) return false;
    if (n == 1) return true;
    if (n % 4 != 0) return false;
    return isPowerOfFour(n / 4);
}
int main() {
    int n;
    scanf("%d", &n);
    (isPowerOfFour(n) == true) ? printf("true") : printf("false");
    return 0;
}