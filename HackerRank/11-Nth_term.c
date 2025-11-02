/*
Problem: Calculate the Nth term
Link: https://www.hackerrank.com/challenges/recursion-in-c/problem
Description: There is a series, S, where the next term is the sum of pervious three terms. Given the first three terms of the series, a, b, and c respectively, you have to output the nth term of the series using recursion.
*/

#include <stdio.h>
int find_nth_term(int n, int a, int b, int c) {
    if(n==3) return c;
    return find_nth_term(n-1, b, c, a+b+c);
}
int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans); 
    return 0;
}