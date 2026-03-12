/*
Problem: Climbing Stairs
Link: https://leetcode.com/problems/climbing-stairs/
Description: You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
*/

#include<stdio.h>
int climbStairs(int n) {
    if (n <= 2) return n;
    int a = 1, b = 2;
    for (int i=3; i<=n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", climbStairs(n));
    return 0;
}