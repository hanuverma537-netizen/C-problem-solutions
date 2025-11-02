/*
Problem: A Number After Double Reversal
Link: https://leetcode.com/problems/a-number-after-a-double-reversal/
Description: Given an integer num, reverse num to get reversed1, then reverse reversed1 to get reversed2. Return true if reversed2 equals num. Otherwise return false.
*/

#include<stdio.h>
#include<stdbool.h>
bool isSameAfterReversals(int n) {
    return (n == 0) || (n % 10 != 0); //checking if ends with 0 or not
}
int main() {
    int n;
    scanf("%d", &n);
    (isSameAfterReversals(n) == 0) ? printf("false") : printf("true");
    return 0;
}