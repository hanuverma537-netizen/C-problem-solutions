/*
Problem: Power of Three
Link: https://leetcode.com/problems/power-of-three/description/
Description: Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.
*/

#include<stdio.h>
#include<stdbool.h>
bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    if (n == 1) return true;
    if (n % 3 != 0) return false;
    return isPowerOfThree(n / 3);
}
int main() {
    int n;
    scanf("%d", &n);
    int result = isPowerOfThree(n);
    (result == 0) ? printf("false") : printf("true");
    return 0;
}