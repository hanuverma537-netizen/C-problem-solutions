/*Problem: Fibonacci Number
Link: https://leetcode.com/problems/fibonacci-number/
Description: The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).
*/

#include<stdio.h>
int fib(int n){
    int a = 0, b = 1, fibNum = 0;
    if (n == 0) return fibNum;
    if (n == 1) return fibNum + 1;
    for(int i=2; i<=n; i++) {
        fibNum = a + b;
        a = b;
        b = fibNum;
    }
    return fibNum;
}
int main() {
    int n;
    scanf("%d", &n);
    int result = fib(n);
    printf("%d", result);
    return 0;
}