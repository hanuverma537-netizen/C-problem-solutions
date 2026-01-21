/*
Problem: Shuffle the Array
Link: https://leetcode.com/problems/shuffle-the-array/description/
Description: Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].
*/

#include<stdio.h>
#include<stdlib.h>
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *result = malloc(numsSize * sizeof(int));
    for (int i=0; i<n; i++) {
        result[2 * i] = nums[i];
        result[(2 * i) + 1] = nums[i + n];
    }
    *returnSize = numsSize;
    return result;
}
int main() {
    int numsSize, returnSize;
    scanf("%d", &numsSize);
    int n;
    scanf("%d", &n);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int *result = shuffle(nums, numsSize, n, &returnSize);
    for(int i=0; i<returnSize; i++) {
        printf("%d ", result[i]);
    }
    free(result);
    return 0;
}