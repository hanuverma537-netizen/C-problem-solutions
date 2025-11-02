/*
Problem: Array Reversal
Link: https://www.hackerrank.com/challenges/reverse-array-c/problem
Description: Given an array, of size n, reverse it.

Example: If array, arr = [1,2,3,4,5], after reversing it, the array should be, arr = [5,4,3,2,1].
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i, ele, j=0;
    scanf("%d", &num);
    int *arr1 = (int*) malloc(num * sizeof(int));
    int *arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr1 + i);
    }
    for (i=num-1; i>=0; i--) {
        ele = arr1[i];
        arr[j] = ele;
        j++;
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}