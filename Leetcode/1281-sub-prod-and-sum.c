/*
Problem: Subtract Product and Sum of Digits of an Integer
Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
Description: Given an integer number n, return the difference between the product of its digits and the sum of its digits.
*/

#include<stdio.h>
int subtractProductAndSum(int n) {
    int sum = 0, product = 1, digit;
    for(n; n>0; n/=10) {
        digit = n % 10;
        sum += digit;
        product *= digit;
    }
    return product - sum;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", subtractProductAndSum(n));
    return 0;
}