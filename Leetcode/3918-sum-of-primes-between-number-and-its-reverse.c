/*
Problem: Sum of Primes Between Number and Its Reverse
Link: https://leetcode.com/problems/sum-of-primes-between-number-and-its-reverse/description/
Description: You are given an integer n.

Let r be the integer formed by reversing the digits of n.

Return the sum of all prime numbers between min(n, r) and max(n, r), inclusive.
*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int sumOfPrimesInRange(int n) {
    int revNum = 0, sum = 0;
    for(int temp = n; temp > 0; temp /= 10) {
        revNum = revNum * 10 + (temp % 10);
    }
    int low = n, high = revNum;
    if (n > revNum) {
        low = revNum;
        high = n;
    }
    for(int i=low; i<=high; i++) {
        bool prime = true;
        if (i <= 1) continue;
        for(int j=2; j<=sqrt(i); j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime == true) sum += i;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumOfPrimesInRange(n));
    return 0;
}