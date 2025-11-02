/* 
Problem: Sum of Digits of a Five Digit Number
Link: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true
Description: Given a five digit integer, print the sum of its digits.
*/ 

#include <stdio.h>
int main() {
    int n, digit, sum=0;
    scanf("%d", &n);
    for(int i=n; i>0; i/=10) {
        digit = i % 10;
        sum += digit;
    }
    printf("%d", sum);
    return 0;
}