/*
Problem: Pow(x, n)
Link: https://leetcode.com/problems/powx-n/
Description: Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
*/

#include<stdio.h>
#include<math.h>
double myPow(double x, int n) {
    return pow(x, n);
}
int main() {
    double x;
    int n;
    scanf("%lf", &x);
    scanf("%d", &n);
    printf("%lf", myPow(x, n));
    return 0;
}