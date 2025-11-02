/*
Problem: Conditional Statements in C
Link: https://www.hackerrank.com/challenges/conditional-statements-in-c/problem
Description: Given a positive integer denoting n, do the following:

If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for 1 , two for 2 , etc.).
If n>9, print Greater than 9.*/
#include<stdio.h>
int main() {
    int n;
    char num[9][10]= {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d", &n);
    (n>=1 && n<=9) ? printf("%s", num[n-1]) : printf("Greater than 9");
    return 0;
}