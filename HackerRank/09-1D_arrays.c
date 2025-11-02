/*
Problem: 1D Arrays in C
Link: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true
Description: Create an array of size n, and read the values from stdin. Iterate the array calculating the sum of all elements. Print the sum at the end.
*/

#include <stdio.h>
int main() {
    int n, i, sum=0;
    scanf("%d", &n);
    int arr[n];
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i=0; i<n; i++) {
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}