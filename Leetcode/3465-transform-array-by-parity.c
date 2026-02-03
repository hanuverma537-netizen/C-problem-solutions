/*
Problem: Transform Array by Parity
Link: https://leetcode.com/problems/transform-array-by-parity/description/
Description: You are given an integer array nums. Transform nums by performing the following operations in the exact order specified:

Replace each even number with 0.
Replace each odd numbers with 1.
Sort the modified array in non-decreasing order.
Return the resulting array after performing these operations.
*/

#include<stdio.h>
#include<stdlib.h>
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int *result = malloc(numsSize * sizeof(int));
    for(int i=0; i<numsSize; i++) {
        (nums[i] % 2 == 0) ? (result[i] = 0) : (result[i] = 1);
    }
    for(int i = 1; i<numsSize; i++) {
        int temp = result[i];
        int j = i - 1;
        while(j>=0 && result[j] > temp) {
            result[j + 1] = result[j];
            j--;
        }
        result[j+1] = temp;
    }
    *returnSize = numsSize;
    return result;
}
int main() {
    int numsSize, returnSize;
    scanf("%d", &numsSize);
    int nums[numsSize];
    for(int i=0; i<numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int *result = transformArray(nums, numsSize, &returnSize);
    for(int i=0; i<returnSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}