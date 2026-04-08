/*
Problem: Harshad Number
Link: https://leetcode.com/problems/harshad-number/description/
Description: An integer divisible by the sum of its digits is said to be a Harshad number. You are given an integer x. Return the sum of the digits of x if x is a Harshad number, otherwise, return -1.
*/

#include<stdio.h>
int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum = 0;
    for(int temp = x; temp > 0; temp /= 10) {
        sum += (temp % 10);
    }
    return (x % sum == 0) ? sum : -1;
}
int main() {
    int x;
    scanf("%d", &x);
    printf("%d", sumOfTheDigitsOfHarshadNumber(x));
    return 0;
}