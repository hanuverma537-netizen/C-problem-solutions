/*
Problem: Sqrt(x)
Link: https://leetcode.com/problems/sqrtx/description/
Description: Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
You must not use any built-in exponent function or operator.
*/

#include<stdio.h>
#include<math.h>
int mySqrt(int x) {
    return (int) sqrt(x) >= 0 ? sqrt(x) : 1;
}
int main() {
    int x;
    scanf("%d", &x);
    int root = mySqrt(x);
    printf("%d", root);
    return 0;
}
