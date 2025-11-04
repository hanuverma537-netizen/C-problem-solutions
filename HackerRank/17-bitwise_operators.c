/*
Problem: Bitwise operators
Link: https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true
Description: Given two integers n and k, find the maximum possible values of (a & b), (a | b), and (a ^ b) for all pairs (a, b) such that 1 ≤ a < b ≤ n, and each result is less than k.
Print the three maximum values (AND, OR, XOR) on separate lines.
*/

#include <stdio.h>
void calculate_the_maximum(int n, int k) {
    int A = 0, O = 0, X = 0;
    for (int a=1; a<=n; a++) {
        for (int b=a+1; b<=n; b++) {
            if ((a & b) < k && (a & b) > A) A = (a & b);
            if ((a | b) < k && (a | b) > O) O = (a | b);
            if ((a ^ b) < k && (a ^ b) > X) X = (a ^ b);
        }
    }
    printf("%d\n%d\n%d", A, O, X);
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}